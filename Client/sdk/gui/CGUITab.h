/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/gui/CGUITab.h
 *  PURPOSE:     Tab widget interface
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

#include "CGUIElement.h"

class CGUITab : public CGUIElement
{
public:
    virtual ~CGUITab(void){};

    virtual void SetCaption(const char* szCaption) = 0;
};
