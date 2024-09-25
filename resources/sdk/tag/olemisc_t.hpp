#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLEMISC]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class olemisc_t : int32_t                 
    {                                              
        recomposeonresize =            0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        onlyiconic =                   0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        insertnotreplace =             0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _static =                      0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cantlinkinside =               0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canlinkbyole1 =                0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        islinkobject =                 0x40,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        insideout =                    0x80,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatewhenvisible =          0x100,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        renderingisdeviceindependent = 0x200,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invisibleatruntime =           0x400,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alwaysrun =                    0x800,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        actslikebutton =               0x1000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        actslikelabel =                0x2000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nouiactivate =                 0x4000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alignable =                    0x8000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        simpleframe =                  0x10000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setclientsitefirst =           0x20000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        imemode =                      0x40000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignoreactivatewhenvisible =    0x80000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wantstomenumerge =             0x100000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supportsmultilevelundo =       0x200000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
