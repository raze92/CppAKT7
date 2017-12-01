//
//  XmlUtils.h
//  AKT7
//
//  Created by Michael Radzieda on 30.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef XmlUtils_h
#define XmlUtils_h

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

namespace XmlUtils {
    
    string getNextXmlTag(ifstream* dataStream);
    
    string getContentUntilCloseTag(ifstream* dataStream, string closeTag);
}



#endif /* XmlUtils_h */
