# -*- encoding=utf-8 -*-

__author__ = 'fpgeek'

def hasNsPrefix(name):
    return ':' in name

def getNsPrefix(name):
    return name.split(':')[0]

def getNsName(name):
    return name.split(':')[1]

def getProtoFileName(fileName):
    return '%s.proto' % fileName

def getPackageName(fileName):
    return 'xml.' + fileName
