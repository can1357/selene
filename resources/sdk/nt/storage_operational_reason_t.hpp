#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_operational_status_reason_t.hpp"

#include "magic/storage_operational_reason_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_OPERATIONAL_REASON]
    // => WDK 10 (NV)
    //
    struct storage_operational_reason_t                                                     
    {                                                                                       
        union u0_raw_bytes_t                                                                
        {                                                                                   
            struct u1_scsi_sense_key_t                                                      
            {                                                                               
                // WDK 10                                                                   
                //                                                                          
                _m03 uint8_t sense_key;                                                       //{ +0x0000    } | .SenseKey
                _m04 uint8_t asc;                                                             //{ +0x0001    } | .ASC
                _m05 uint8_t ascq;                                                            //{ +0x0002    } | .ASCQ
                                                                                            
                SDK_NONVOL_PROPERTIES( "_STORAGE_OPERATIONAL_REASON.RawBytes.ScsiSenseKey.$", 0x0, false, 0xcca5a09cd82de3e1 );                                   
                SDK_FIXED_SIZE( u1_scsi_sense_key_t, 0x4 );                                   
            };                                                                              
                                                                                            
            struct u2_nvdimm_n_t                                                            
            {                                                                               
                // WDK 10                                                                   
                //                                                                          
                _m07 uint8_t                critical_health;                                  //{ +0x0000    } | .CriticalHealth
                _m08 sdk::array<uint8_t, 2> module_health;                                    //{ +0x0001    } | .ModuleHealth
                _m09 uint8_t                error_threshold_status;                           //{ +0x0003    } | .ErrorThresholdStatus
                                                                                            
                SDK_NONVOL_PROPERTIES( "_STORAGE_OPERATIONAL_REASON.RawBytes.NVDIMM_N.$", 0x0, false, 0x1dd65c9e377575c );                                                
                SDK_FIXED_SIZE( u2_nvdimm_n_t, 0x4 );                                                
            };                                                                              
                                                                                            
            // WDK 10                                                                       
            //                                                                              
            _m06 u1_scsi_sense_key_t                               scsi_sense_key;            //{ +0x0000    } | .ScsiSenseKey
            _m10 u2_nvdimm_n_t                                     nvdimm_n;                  //{ +0x0000    } | .NVDIMM_N
            _m11 uint32_t                                          as_ulong;                  //{ +0x0000    } | .AsUlong
                                                                                            
            SDK_NONVOL_PROPERTIES( "_STORAGE_OPERATIONAL_REASON.RawBytes.$", 0x0, false, 0xd03a51033c22d7be );                         
            SDK_FIXED_SIZE( u0_raw_bytes_t, 0x4 );                                          
        };                                                                                  
                                                                                            
        // WDK 10                                                                           
        //                                                                                  
        _m00 uint32_t                                                             version;    //{ +0x0000    } | .Version
        _m01 uint32_t                                                             size;       //{ +0x0004    } | .Size
        _m02 enum nt::storage_operational_status_reason_t                         reason;     //{ +0x0008    } | .Reason
        _m12 u0_raw_bytes_t                                                       raw_bytes;  //{ +0x000c    } | .RawBytes
                                                                                            
        SDK_NONVOL_PROPERTIES( "_STORAGE_OPERATIONAL_REASON.$", 0x0, false, 0xa830c317ec9f348b );          
        SDK_FIXED_SIZE( storage_operational_reason_t, 0x10 );                               
    };                                                                                      
};
#include "magic/storage_operational_reason_t.end.hpp"
SDK_VERIFY( struct nt::storage_operational_reason_t::u0_raw_bytes_t::u1_scsi_sense_key_t, 0x4 );
SDK_VERIFY( struct nt::storage_operational_reason_t::u0_raw_bytes_t::u2_nvdimm_n_t, 0x4 );
SDK_VERIFY( union nt::storage_operational_reason_t::u0_raw_bytes_t, 0x4 );
SDK_VERIFY( struct nt::storage_operational_reason_t, 0x10 );
