#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_device_type_t.start.hpp"
namespace stor::port
{
    // [struct _SCSI_DEVICE_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scsi_device_type_t            
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                               
        _m00 const char*    name;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 const char*    generic_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericName
        _m02 const wchar_t* device_map;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceMap
        _m03 uint8_t        is_storage;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IsStorage
                                         
        SDK_MAGIC_PROPERTIES( "_SCSI_DEVICE_TYPE.$", 0x20, true, 0xc215e5a25e507149 );             
        SDK_FIXED_SIZE( scsi_device_type_t, 0x20 );             
    };                                   
};
#include "magic/scsi_device_type_t.end.hpp"
SDK_VERIFY( struct stor::port::scsi_device_type_t, 0x20 );
