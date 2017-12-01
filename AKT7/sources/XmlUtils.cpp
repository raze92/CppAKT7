//
//  XmlUtils.cpp
//  AKT7
//
//  Created by Michael Radzieda on 01.12.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "XmlUtils.h"

using namespace std;

string XmlUtils::getNextXmlTag(ifstream* dataStream) {
    string tag;
    getline(*dataStream, tag, '>');
    size_t start = tag.find('<');
    return tag.substr(start + 1);
}
    
string XmlUtils::getContentUntilCloseTag(ifstream* dataStream, string closeTag) {
    string value = "";
    string tag;
    while(!dataStream->eof())
    {
        string str;
        getline(*dataStream, str, '<');
        value += str;
        getline(*dataStream, tag, '>');
        if(tag == closeTag) {
            return value;
        } else {
            value += "<" + tag + ">";
        }
    }
    return value;
    }
