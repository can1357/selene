#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_qos_policy_t.hpp"

#include "magic/mfnd_qos_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_QOS]
    // => Windows 11
    //
    struct mfnd_qos_t                                                            
    {                                                                            
        // Windows 11                                                            
        //                                                                       
        _m00 uint16_t                           version;                           //{ +0x0000    } | .Version
        _m01 uint16_t                           size_in_bytes;                     //{ +0x0002    } | .SizeInBytes
        _m02 enum stor::port::mfnd_qos_policy_t qo_s_policy;                       //{ +0x0004    } | .QoSPolicy
        _m03 uint8_t                            isolation_level;                   //{ +0x0008    } | .IsolationLevel
        _m04 uint32_t                           reserve_read_bandwidth_in_m_bps;   //{ +0x000c    } | .ReserveReadBandwidthInMBps
        _m05 uint32_t                           reserve_write_bandwidth_in_m_bps;  //{ +0x0010    } | .ReserveWriteBandwidthInMBps
        _m06 uint32_t                           limit_bandwidth_in_m_bps;          //{ +0x0014    } | .LimitBandwidthInMBps
        _m07 uint32_t                           limit_write_bandwidth_in_m_bps;    //{ +0x0018    } | .LimitWriteBandwidthInMBps
        _m08 uint32_t                           reserve_read_iops;                 //{ +0x001c    } | .ReserveReadIops
        _m09 uint32_t                           reserve_write_iops;                //{ +0x0020    } | .ReserveWriteIops
        _m10 uint32_t                           limit_iops;                        //{ +0x0024    } | .LimitIops
        _m11 uint32_t                           limit_write_iops;                  //{ +0x0028    } | .LimitWriteIops
                                                                                 
        SDK_MAGIC_PROPERTIES( "_MFND_QOS.$", 0x0, false, 0x68f3e27cb2d4442f );                                 
        SDK_FIXED_SIZE( mfnd_qos_t, 0x38 );                                      
    };                                                                           
};
#include "magic/mfnd_qos_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_qos_t, 0x38 );
