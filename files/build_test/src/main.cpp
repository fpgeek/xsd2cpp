#include <iostream>
#include <sstream>
#include <fstream>
#include "wml_xsd.h"
#include "vml-main_xsd.h"
#include "pml_xsd.h"
#include "shared-documentPropertiesVariantTypes_xsd.h"

int main()
{
    using namespace std;
    cout << "xsd2cpp main execution!" << endl;

    // word
    {
        using namespace ns_w;
        document_element docElement;
        CT_Body* pBodyElem = docElement.mutable_body();
        ns_s::ST_OnOff valAttr;
        valAttr.mutable_ST_OnOff1()->set_type(ns_s::ST_OnOff1::_on_);
        CT_Text *pTextElem = pBodyElem->add_p()->add_r()->add_t();
        pTextElem->set_xml_space_attr(ns_xml::space::_preserve_);
        pTextElem->set_string("test");
        pBodyElem->add_p()->add_r()->get_rPr().has_rPrChange();
        pBodyElem->add_p()->add_r()->mutable_rPr()->add_dstrike()->set_val_attr(valAttr);
        pBodyElem->add_p()->add_r()->mutable_rPr()->add_b();
        pBodyElem->add_p()->add_r()->mutable_rPr()->add_vertAlign()->set_val_attr(ns_s::ST_VerticalAlignRun::_baseline_);
        pBodyElem->add_ins()->add_m_oMathPara();

//        ns_wp::CT_Anchor *pAnchorElem = pBodyElem->add_p()->add_r()->add_drawing()->add_wp_anchor();
//        pAnchorElem->mutable_extent()->set_cx_attr(27273042316900);
//        pAnchorElem->mutable_extent()->set_cy_attr(1000);
//        CT_P *pPElem = pBodyElem->add_p();
//        pPElem->add_bookmarkStart()->set_id_attr(0);
//        pPElem->add_bookmarkStart()->set_colFirst_attr(100);
//        pPElem->clear();

        pBodyElem->add_p();
        pBodyElem->add_p();

        ns_v::rect_element* pVRectElement = new ns_v::rect_element();
        pVRectElement->add_fill();
        docElement.mutable_background()->append_v_any(pVRectElement);
        
        ns_vt::CT_Vstream vStreamElem;
        vStreamElem.set_base64Binary("FF0000");
        vStreamElem.set_version_attr(string("version"));
        cout << vStreamElem.toXmlElemStr("test") << endl;

        fstream fileStream("word.xml", fstream::out);
        docElement.toXml(fileStream);
        fileStream.close();
    }


    // slide
    {
        using namespace ns_p;

        sld_element sldElement;

        cout << sldElement.get_cSld().has_bg() << endl;
        sldElement.mutable_cSld()->mutable_spTree()->mutable_nvGrpSpPr()->mutable_cNvPr();
        sldElement.mutable_cSld()->mutable_spTree()->mutable_grpSpPr()->mutable_xfrm();
        cout << sldElement.get_cSld().has_spTree() << endl;

        fstream fileStream("slide.xml", fstream::out);
        sldElement.toXml(fileStream);
        fileStream.close();
    }



    return 0;
}