#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_control_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_CONTROL_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_control_page_t                                         
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m000 uint6_t                page_code;                          //{ +0x0000@0  } | .PageCode
        _m001 uint1_t                page_savable;                       //{ +0x0000@7  } | .PageSavable
        _m002 uint8_t                page_length;                        //{ +0x0001    } | .PageLength
        _m003 uint1_t                rlec;                               //{ +0x0002@0  } | .RLEC
        _m004 uint1_t                gltsd;                              //{ +0x0002@1  } | .GLTSD
        _m005 uint1_t                d_sense;                            //{ +0x0002@2  } | .D_SENSE
        _m006 uint1_t                dpicz;                              //{ +0x0002@3  } | .DPICZ
        _m007 uint1_t                tmf_only;                           //{ +0x0002@4  } | .TMF_ONLY
        _m008 uint3_t                tst;                                //{ +0x0002@5  } | .TST
        _m009 uint1_t                obsolete1;                          //{ +0x0003@0  } | .Obsolete1
        _m010 uint2_t                qerr;                               //{ +0x0003@1  } | .QERR
        _m011 uint1_t                nuar;                               //{ +0x0003@3  } | .NUAR
        _m012 uint4_t                queue_algorithm_modifier;           //{ +0x0003@4  } | .QueueAlgorithmModifier
        _m013 uint3_t                obsolete2;                          //{ +0x0004@0  } | .Obsolete2
        _m014 uint1_t                swp;                                //{ +0x0004@3  } | .SWP
        _m015 uint2_t                ua_intlck_ctrl;                     //{ +0x0004@4  } | .UA_INTLCK_CTRL
        _m016 uint1_t                rac;                                //{ +0x0004@6  } | .RAC
        _m017 uint1_t                vs;                                 //{ +0x0004@7  } | .VS
        _m018 uint3_t                autoload_mode;                      //{ +0x0005@0  } | .AutoloadMode
        _m019 uint1_t                rwwp;                               //{ +0x0005@4  } | .RWWP
        _m020 uint1_t                atmpe;                              //{ +0x0005@5  } | .ATMPE
        _m021 uint1_t                tas;                                //{ +0x0005@6  } | .TAS
        _m022 uint1_t                ato;                                //{ +0x0005@7  } | .ATO
        _m023 sdk::array<uint8_t, 2> obsolete3;                          //{ +0x0006    } | .Obsolete3
        _m024 sdk::array<uint8_t, 2> busy_timeout_period;                //{ +0x0008    } | .BusyTimeoutPeriod
        _m025 sdk::array<uint8_t, 2> extende_self_test_completion_time;  //{ +0x000a    } | .ExtendeSelfTestCompletionTime
                                                                       
        SDK_NONVOL_PROPERTIES( "_MODE_CONTROL_PAGE.$", 0x0, false, 0xda830213cb67d13a );                                  
        SDK_FIXED_SIZE( mode_control_page_t, 0xc );                                  
    };                                                                 
};
#include "magic/mode_control_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_control_page_t, 0xc );
