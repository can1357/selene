#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dcb_t.start.hpp"
namespace win
{
    // [struct _DCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dcb_t                             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                   
        _m000 uint32_t dc_blength;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DCBlength
        _m001 uint32_t baud_rate;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BaudRate
        _m002 uint1_t  f_binary;               //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .fBinary
        _m003 uint1_t  f_parity;               //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .fParity
        _m004 uint1_t  f_outx_cts_flow;        //{ +0x0008@2  +0x0008@2  +0x0008@2  +0x0008@2  } | .fOutxCtsFlow
        _m005 uint1_t  f_outx_dsr_flow;        //{ +0x0008@3  +0x0008@3  +0x0008@3  +0x0008@3  } | .fOutxDsrFlow
        _m006 uint2_t  f_dtr_control;          //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .fDtrControl
        _m007 uint1_t  f_dsr_sensitivity;      //{ +0x0008@6  +0x0008@6  +0x0008@6  +0x0008@6  } | .fDsrSensitivity
        _m008 uint1_t  f_tx_continue_on_xoff;  //{ +0x0008@7  +0x0008@7  +0x0008@7  +0x0008@7  } | .fTXContinueOnXoff
        _m009 uint1_t  f_out_x;                //{ +0x0008@8  +0x0008@8  +0x0008@8  +0x0008@8  } | .fOutX
        _m010 uint1_t  f_in_x;                 //{ +0x0008@9  +0x0008@9  +0x0008@9  +0x0008@9  } | .fInX
        _m011 uint1_t  f_error_char;           //{ +0x0008@10 +0x0008@10 +0x0008@10 +0x0008@10 } | .fErrorChar
        _m012 uint1_t  f_null;                 //{ +0x0008@11 +0x0008@11 +0x0008@11 +0x0008@11 } | .fNull
        _m013 uint2_t  f_rts_control;          //{ +0x0008@12 +0x0008@12 +0x0008@12 +0x0008@12 } | .fRtsControl
        _m014 uint1_t  f_abort_on_error;       //{ +0x0008@14 +0x0008@14 +0x0008@14 +0x0008@14 } | .fAbortOnError
        _m015 uint17_t f_dummy2;               //{ +0x0008@15 +0x0008@15 +0x0008@15 +0x0008@15 } | .fDummy2
        _m016 uint16_t w_reserved;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wReserved
        _m017 uint16_t xon_lim;                //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .XonLim
        _m018 uint16_t xoff_lim;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .XoffLim
        _m019 uint8_t  byte_size;              //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ByteSize
        _m020 uint8_t  parity;                 //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .Parity
        _m021 uint8_t  stop_bits;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .StopBits
        _m022 char     xon_char;               //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .XonChar
        _m023 char     xoff_char;              //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .XoffChar
        _m024 char     error_char;             //{ +0x0017    +0x0017    +0x0017    +0x0017    } | .ErrorChar
        _m025 char     eof_char;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EofChar
        _m026 char     evt_char;               //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .EvtChar
        _m027 uint16_t w_reserved1;            //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .wReserved1
                                             
        SDK_MAGIC_PROPERTIES( "_DCB.$", 0x1c, true, 0x989add70df56a49b );                      
        SDK_FIXED_SIZE( dcb_t, 0x1c );                      
    };                                       
};
#include "magic/dcb_t.end.hpp"
SDK_VERIFY( struct win::dcb_t, 0x1c );
