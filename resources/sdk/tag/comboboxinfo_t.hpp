#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"

namespace win { struct hwnd_t; }

#include "magic/comboboxinfo_t.start.hpp"
namespace tag
{
    // [struct tagCOMBOBOXINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct comboboxinfo_t                     
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct tag::rect_t  rc_item;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rcItem
        _m02 struct tag::rect_t  rc_button;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .rcButton
        _m03 uint32_t            state_button;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .stateButton
        _m04 struct win::hwnd_t* hwnd_combo;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .hwndCombo
        _m05 struct win::hwnd_t* hwnd_item;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .hwndItem
        _m06 struct win::hwnd_t* hwnd_list;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .hwndList
                                              
        SDK_MAGIC_PROPERTIES( "tagCOMBOBOXINFO.$", 0x40, true, 0xdc48042ec18a7e9d );             
        SDK_FIXED_SIZE( comboboxinfo_t, 0x40 );             
    };                                        
};
#include "magic/comboboxinfo_t.end.hpp"
SDK_VERIFY( struct tag::comboboxinfo_t, 0x40 );
