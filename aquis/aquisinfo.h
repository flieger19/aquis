//
//  aquisinfo.h
//  aquis
//
//  Created by Constantin Dullo on 11.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef AQUISINFO_H
#define AQUISINFO_H

// version
#define AQUIS_VERSION_MAJOR    0
#define AQUIS_VERSION_MINOR    0
#define AQUIS_VERSION_REVISION 1
#define AQUIS_VERSION_STATUS   "beta"

#define AQUISAUX_STR_EXP(__A)  #__A
#define AQUISAUX_STR(__A)      AQUISAUX_STR_EXP(__A)

#define AQUISAUX_STRW_EXP(__A)  L ## #__A
#define AQUISAUX_STRW(__A)      AQUISAUX_STRW_EXP(__A)

#define AQUIS_VERSION          AQUISAUX_STR(AQUIS_VERSION_MAJOR) "." AQUISAUX_STR(AQUIS_VERSION_MINOR) "." AQUISAUX_STR(AQUIS_VERSION_REVISION) AQUIS_VERSION_STATUS

// developers
#define DEVELOPERS "flieger19"//"Constantin Dullo\nEkaterina Zavyalova"

// date
#define DATE "21.11.2017"

#endif // AQUISINFO_H
