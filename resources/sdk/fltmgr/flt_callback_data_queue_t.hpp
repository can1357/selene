#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/csq_t.hpp"
#include "flt_callback_data_queue_flags_t.hpp"

#include "magic/flt_callback_data_queue_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;
    struct flt_callback_data_t;
    struct flt_callback_data_queue_t;

    // [struct _FLT_CALLBACK_DATA_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_callback_data_queue_t                                           
    {                                                                          
        using insert_io_t =            sdk::function<int32_t(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*, void*)>*;                     
        using remove_io_t =            sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*)>*;                     
        using peek_next_io_t =         sdk::function<struct fltmgr::flt_callback_data_t*(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*, void*)>*;                     
        using acquire_t =              sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, uint8_t*)>*;                     
        using release_t =              sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, uint8_t)>*;                     
        using complete_canceled_io_t = sdk::function<void(struct fltmgr::flt_callback_data_queue_t*, struct fltmgr::flt_callback_data_t*)>*;                     
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                     
        _m00 struct io::csq_t                             csq;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Csq
        _m01 enum fltmgr::flt_callback_data_queue_flags_t flags;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m02 struct fltmgr::flt_instance_t*               instance;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Instance
        _m03 insert_io_t                                  insert_io;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .InsertIo
        _m04 remove_io_t                                  remove_io;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .RemoveIo
        _m05 peek_next_io_t                               peek_next_io;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PeekNextIo
        _m06 acquire_t                                    acquire;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Acquire
        _m07 release_t                                    release;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Release
        _m08 complete_canceled_io_t                       complete_canceled_io;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CompleteCanceledIo
                                                                               
        SDK_MAGIC_PROPERTIES( "_FLT_CALLBACK_DATA_QUEUE.$", 0x80, true, 0x8d6f3709f0814033 );                     
        SDK_FIXED_SIZE( flt_callback_data_queue_t, 0x80 );                     
    };                                                                         
};
#include "magic/flt_callback_data_queue_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_callback_data_queue_t, 0x80 );
