#pragma once
#include <sdkgen/support_library.hpp>
#include "key_event_record_t.hpp"
#include "menu_event_record_t.hpp"
#include "focus_event_record_t.hpp"
#include "mouse_event_record_t.hpp"
#include "window_buffer_size_record_t.hpp"

#include "magic/input_record_t.start.hpp"
namespace win
{
    // [struct _INPUT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct input_record_t                                                                    
    {                                                                                        
        union u0_event_t                                                                     
        {                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
            //                                                                               
            _m01 struct win::key_event_record_t          key_event;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyEvent
            _m02 struct win::mouse_event_record_t        mouse_event;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MouseEvent
            _m03 struct win::window_buffer_size_record_t window_buffer_size_event;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WindowBufferSizeEvent
            _m04 struct win::menu_event_record_t         menu_event;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MenuEvent
            _m05 struct win::focus_event_record_t        focus_event;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FocusEvent
                                                                                             
            SDK_MAGIC_PROPERTIES( "_INPUT_RECORD.Event.$", 0x10, true, 0x2f1d4dece6aeefda );                                    
            SDK_FIXED_SIZE( u0_event_t, 0x10 );                                              
        };                                                                                   
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                                   
        _m00 uint16_t                                                             event_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventType
        _m06 u0_event_t                                                           event;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
                                                                                             
        SDK_MAGIC_PROPERTIES( "_INPUT_RECORD.$", 0x14, true, 0x40263edfa982e3be );           
        SDK_FIXED_SIZE( input_record_t, 0x14 );                                              
    };                                                                                       
};
#include "magic/input_record_t.end.hpp"
SDK_VERIFY( union win::input_record_t::u0_event_t, 0x10 );
SDK_VERIFY( struct win::input_record_t, 0x14 );
