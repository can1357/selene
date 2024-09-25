#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/copy_information_t.hpp"
#include "../io/adapter_crypto_parameters_t.hpp"

namespace io { struct irp_ext_track_offset_header_t; }

#include "magic/irp_extension_t.start.hpp"
namespace iop
{
    // [struct _IOP_IRP_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_extension_t                                                        
    {                                                                             
        union u0_driver_flags_t                                                   
        {                                                                         
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
            //                                                                    
            _m13 uint64_t value;                                                    //{ +0x0000    +0x0000    +0x0000    } | .Value
            _m14 uint32_t user_flags;                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .UserFlags
            _m15 uint16_t system_flags;                                             //{ +0x0000@32 +0x0000@32 +0x0000@32 } | .SystemFlags
            _m16 uint16_t user_flags_id;                                            //{ +0x0000@48 +0x0000@48 +0x0000@48 } | .UserFlagsId
                                                                                  
            SDK_MAGIC_PROPERTIES( "_IOP_IRP_EXTENSION.DriverFlags.$", 0x8, true, 0x1f8fd3fdbd1c9d06 );                                         
            SDK_FIXED_SIZE( u0_driver_flags_t, 0x8 );                                         
        };                                                                        
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                        
        _m00 uint16_t                                  extension_flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtensionFlags
        _m01 uint1_t                                   allocated;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Allocated
        _m02 uint1_t                                   propagate_id;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PropagateId
        _m03 uint16_t                                  types_allocated;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TypesAllocated
        _m04 sdk::array<uint8_t, 4>                    generic_extension;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .GenericExtension
        _m05 void*                                     verifier_context;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VerifierContext
        _m06 uint64_t                                  disk_io_attribution_handle;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DiskIoAttributionHandle
        _m07 struct nt::guid_t                         activity_id;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ActivityId
        _m08 int64_t                                   timestamp;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Timestamp
        _m09 uint32_t                                  zeroing_offset;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ZeroingOffset
        _m10 struct io::irp_ext_track_offset_header_t* fs_track_offset_blob;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FsTrackOffsetBlob
        _m11 int64_t                                   fs_tracked_offset;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FsTrackedOffset
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                        
        _m12 struct io::adapter_crypto_parameters_t    adapter_crypto_parameters;   //{ +0x0028    +0x0028    +0x0028    } | .AdapterCryptoParameters
        _m17 u0_driver_flags_t                         driver_flags;                //{ +0x0038    +0x0038    +0x0038    } | .DriverFlags
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m18 struct nt::copy_information_t             copy_information;            //{ +0x0040    } | .CopyInformation
                                                                                  
        SDK_MAGIC_PROPERTIES( "_IOP_IRP_EXTENSION.$", 0x40, true, 0xee575e951cacb6ce );                           
        SDK_DYNAMIC_SIZE( irp_extension_t );                                      
    };                                                                            
};
#include "magic/irp_extension_t.end.hpp"
SDK_VERIFY( union iop::irp_extension_t::u0_driver_flags_t, 0x8 );
