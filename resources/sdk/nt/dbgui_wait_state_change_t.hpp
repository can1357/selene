#pragma once
#include <sdkgen/support_library.hpp>
#include "client_id_t.hpp"
#include "../dbg/state_t.hpp"
#include "../dbgkm/load_dll_t.hpp"
#include "../dbgkm/exception_t.hpp"
#include "../dbgkm/unload_dll_t.hpp"
#include "dbgui_create_thread_t.hpp"
#include "../dbgkm/exit_thread_t.hpp"
#include "dbgui_create_process_t.hpp"
#include "../dbgkm/exit_process_t.hpp"

#include "magic/dbgui_wait_state_change_t.start.hpp"
namespace nt
{
    // [struct _DBGUI_WAIT_STATE_CHANGE]
    // => WDK 10 (NV)
    //
    struct dbgui_wait_state_change_t                                                 
    {                                                                                
        union u0_state_info_t                                                        
        {                                                                            
            // WDK 10                                                                
            //                                                                       
            _m02 struct dbgkm::exception_t         exception;                          //{ +0x0000    } | .Exception
            _m03 struct nt::dbgui_create_thread_t  create_thread;                      //{ +0x0000    } | .CreateThread
            _m04 struct nt::dbgui_create_process_t create_process_info;                //{ +0x0000    } | .CreateProcessInfo
            _m05 struct dbgkm::exit_thread_t       exit_thread;                        //{ +0x0000    } | .ExitThread
            _m06 struct dbgkm::exit_process_t      exit_process;                       //{ +0x0000    } | .ExitProcess
            _m07 struct dbgkm::load_dll_t          load_dll;                           //{ +0x0000    } | .LoadDll
            _m08 struct dbgkm::unload_dll_t        unload_dll;                         //{ +0x0000    } | .UnloadDll
                                                                                     
            SDK_NONVOL_PROPERTIES( "_DBGUI_WAIT_STATE_CHANGE.StateInfo.$", 0x0, false, 0x234c71f13dd989c6 );                                  
            SDK_FIXED_SIZE( u0_state_info_t, 0xa0 );                                  
        };                                                                           
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 enum dbg::state_t                                         new_state;      //{ +0x0000    } | .NewState
        _m01 struct nt::client_id_t                                    app_client_id;  //{ +0x0008    } | .AppClientId
        _m09 u0_state_info_t                                           state_info;     //{ +0x0018    } | .StateInfo
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DBGUI_WAIT_STATE_CHANGE.$", 0x0, false, 0x584392968f994173 );              
        SDK_FIXED_SIZE( dbgui_wait_state_change_t, 0xb8 );                           
    };                                                                               
};
#include "magic/dbgui_wait_state_change_t.end.hpp"
SDK_VERIFY( union nt::dbgui_wait_state_change_t::u0_state_info_t, 0xa0 );
SDK_VERIFY( struct nt::dbgui_wait_state_change_t, 0xb8 );
