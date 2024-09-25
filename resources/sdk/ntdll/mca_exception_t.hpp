#pragma once
#include <sdkgen/support_library.hpp>
#include "mci_addr_t.hpp"
#include "mci_stats_t.hpp"
#include "mca_exception_type_t.hpp"

#include "magic/mca_exception_t.start.hpp"
namespace ntdll
{
    // [struct _MCA_EXCEPTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mca_exception_t                                             
    {                                                                  
        enum class u0_exception_type_t : int32_t                       
        {                                                              
            mce_record = 0x0,                                            // WDK 10
            mca_record = 0x1,                                            // WDK 10
        };                                                             
                                                                       
        struct u1_mca_t                                                
        {                                                              
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                                         
            _m04 uint8_t                  bank_number;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BankNumber
            _m05 union ntdll::mci_stats_t status;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
            _m06 union ntdll::mci_addr_t  address;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Address
            _m07 uint64_t                 misc;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Misc
                                                                       
            SDK_NONVOL_PROPERTIES( "_MCA_EXCEPTION.Mca.$", 0x20, true, 0x18383d25bdf3c5b3 );                             
            SDK_FIXED_SIZE( u1_mca_t, 0x20 );                             
        };                                                             
                                                                       
        struct u6_mce_t                                                
        {                                                              
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                         
            _m09 uint64_t address;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
            _m10 uint64_t type;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                                                       
            SDK_NONVOL_PROPERTIES( "_MCA_EXCEPTION.Mce.$", 0x10, true, 0x36aac35d5651cf2a );                         
            SDK_FIXED_SIZE( u6_mce_t, 0x10 );                          
        };                                                             
                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 uint32_t                                 version_number;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VersionNumber
        _m01 int32_t                                  exception_type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ExceptionType
        _m02 int64_t                                  time_stamp;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeStamp
        _m03 uint32_t                                 processor_number;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessorNumber
        _m08 u1_mca_t                                 mca;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Mca
        _m11 u6_mce_t                                 mce;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Mce
        _m12 uint32_t                                 ext_cnt;           //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ExtCnt
        _m13 sdk::array<uint64_t, 24>                 ext_reg;           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ExtReg
                                                                       
        SDK_NONVOL_PROPERTIES( "_MCA_EXCEPTION.$", 0x100, true, 0x6d986075952ce111 );                 
        SDK_FIXED_SIZE( mca_exception_t, 0x100 );                      
    };                                                                 
};
#include "magic/mca_exception_t.end.hpp"
SDK_VERIFY( struct ntdll::mca_exception_t::u1_mca_t, 0x20 );
SDK_VERIFY( struct ntdll::mca_exception_t::u6_mce_t, 0x10 );
SDK_VERIFY( struct ntdll::mca_exception_t, 0x100 );
