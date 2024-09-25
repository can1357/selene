#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCONTEXTEVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class contextevent_t : int32_t           
    {                                             
        none =                      0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call =                      0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enter =                     0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leave =                     0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _return =                   0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callfillbuffer =            0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enterwithbuffer =           0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leavefillbuffer =           0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returnwithbuffer =          0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begincall =                 0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginenter =                0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginleave =                0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginreturn =               0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishcall =                0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishenter =               0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishleave =               0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishreturn =              0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begincallfillbuffer =       0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginenterwithbuffer =      0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishleavefillbuffer =     0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishreturnwithbuffer =    0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaveexception =            0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leaveexceptionfillbuffer =  0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returnexception =           0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returnexceptionwithbuffer = 0x800000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addrefpolicy =              0x10000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        releasepolicy =             0x20000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
