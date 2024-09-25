#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc { struct message_t; }

#include "magic/midl_stub_message_t.start.hpp"
namespace win
{
    struct array_info_t;
    struct ndr_scontext_t;
    struct midl_stub_desc_t;
    struct ndr_proc_context_t;
    struct ndr_async_message_t;
    struct full_ptr_xlat_tables_t;
    struct i_rpc_channel_buffer_t;
    struct ndr_correlation_info_t;
    struct ndr_pointer_queue_state_t;
    struct ndr_alloc_all_nodes_context_t;

    // [struct _MIDL_STUB_MESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_stub_message_t                                                          
    {                                                                                   
        struct u0_saved_context_handles_t                                               
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                            
            //                                                                          
            _m48 sdk::array<void*, 2> pad;                                                //{ +0x0000    +0x0000    +0x0000    } | .pad
            _m49 void*                user_context;                                       //{ +0x0010    +0x0010    +0x0010    } | .userContext
                                                                                        
            SDK_MAGIC_PROPERTIES( "_MIDL_STUB_MESSAGE.SavedContextHandles.$", 0x18, true, 0x90f046a426e6d7c5 );                                            
            SDK_FIXED_SIZE( u0_saved_context_handles_t, 0x18 );                                            
        };                                                                              
                                                                                        
        using saved_context_handles_t = sdk::variant<u0_saved_context_handles_t**, struct win::ndr_scontext_t**>;                               
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m000 struct rpc::message_t*                     rpc_msg;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RpcMsg
        _m001 uint8_t*                                   buffer;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m002 uint8_t*                                   buffer_start;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BufferStart
        _m003 uint8_t*                                   buffer_end;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BufferEnd
        _m004 uint8_t*                                   buffer_mark;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BufferMark
        _m005 uint32_t                                   buffer_length;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BufferLength
        _m006 uint32_t                                   memory_size;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MemorySize
        _m007 uint8_t*                                   memory;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Memory
        _m008 uint8_t                                    is_client;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IsClient
        _m009 uint16_t                                   u_flags2;                        //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .uFlags2
        _m010 int32_t                                    reuse_buffer;                    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .ReuseBuffer
        _m011 struct win::ndr_alloc_all_nodes_context_t* p_alloc_all_nodes_context;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pAllocAllNodesContext
        _m012 struct win::ndr_pointer_queue_state_t*     p_pointer_queue_state;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pPointerQueueState
        _m013 int32_t                                    ignore_embedded_pointers;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IgnoreEmbeddedPointers
        _m014 uint8_t*                                   pointer_buffer_mark;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PointerBufferMark
        _m015 uint8_t                                    corr_desp_increment;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CorrDespIncrement
        _m016 uint8_t                                    u_flags;                         //{ +0x0061    +0x0061    +0x0061    +0x0061    } | .uFlags
        _m017 uint16_t                                   unique_ptr_count;                //{ +0x0062    +0x0062    +0x0062    +0x0062    } | .UniquePtrCount
        _m018 uint64_t                                   max_count;                       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MaxCount
        _m019 uint32_t                                   offset;                          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Offset
        _m020 uint32_t                                   actual_count;                    //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .ActualCount
        _m021 sdk::function<void*(uint64_t)>*            pfn_allocate;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .pfnAllocate
        _m022 sdk::function<void(void*)>*                pfn_free;                        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .pfnFree
        _m023 uint8_t*                                   stack_top;                       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .StackTop
        _m024 uint8_t*                                   p_presented_type;                //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .pPresentedType
        _m025 uint8_t*                                   p_transmit_type;                 //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .pTransmitType
        _m026 void*                                      saved_handle;                    //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .SavedHandle
        _m027 const struct win::midl_stub_desc_t*        stub_desc;                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .StubDesc
        _m028 struct win::full_ptr_xlat_tables_t*        full_ptr_xlat_tables;            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .FullPtrXlatTables
        _m029 uint32_t                                   full_ptr_ref_id;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .FullPtrRefId
        _m030 uint32_t                                   pointer_length;                  //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .PointerLength
        _m031 int1_t                                     f_in_dont_free;                  //{ +0x00c0@0  +0x00c0@0  +0x00c0@0  +0x00c0@0  } | .fInDontFree
        _m032 int1_t                                     f_dont_call_free_inst;           //{ +0x00c0@1  +0x00c0@1  +0x00c0@1  +0x00c0@1  } | .fDontCallFreeInst
        _m033 int1_t                                     f_unused1;                       //{ +0x00c0@2  +0x00c0@2  +0x00c0@2  +0x00c0@2  } | .fUnused1
        _m034 int1_t                                     f_has_return;                    //{ +0x00c0@3  +0x00c0@3  +0x00c0@3  +0x00c0@3  } | .fHasReturn
        _m035 int1_t                                     f_has_extensions;                //{ +0x00c0@4  +0x00c0@4  +0x00c0@4  +0x00c0@4  } | .fHasExtensions
        _m036 int1_t                                     f_has_new_corr_desc;             //{ +0x00c0@5  +0x00c0@5  +0x00c0@5  +0x00c0@5  } | .fHasNewCorrDesc
        _m037 int1_t                                     f_is_in;                         //{ +0x00c0@6  +0x00c0@6  +0x00c0@6  +0x00c0@6  } | .fIsIn
        _m038 int1_t                                     f_is_out;                        //{ +0x00c0@7  +0x00c0@7  +0x00c0@7  +0x00c0@7  } | .fIsOut
        _m039 int1_t                                     f_is_oicf;                       //{ +0x00c0@8  +0x00c0@8  +0x00c0@8  +0x00c0@8  } | .fIsOicf
        _m040 int1_t                                     f_buffer_valid;                  //{ +0x00c0@9  +0x00c0@9  +0x00c0@9  +0x00c0@9  } | .fBufferValid
        _m041 int1_t                                     f_has_memory_validate_callback;  //{ +0x00c0@10 +0x00c0@10 +0x00c0@10 +0x00c0@10 } | .fHasMemoryValidateCallback
        _m042 int1_t                                     f_in_free;                       //{ +0x00c0@11 +0x00c0@11 +0x00c0@11 +0x00c0@11 } | .fInFree
        _m043 int1_t                                     f_need_mccp;                     //{ +0x00c0@12 +0x00c0@12 +0x00c0@12 +0x00c0@12 } | .fNeedMCCP
        _m044 int3_t                                     f_unused2;                       //{ +0x00c0@13 +0x00c0@13 +0x00c0@13 +0x00c0@13 } | .fUnused2
        _m045 int16_t                                    f_unused3;                       //{ +0x00c0@16 +0x00c0@16 +0x00c0@16 +0x00c0@16 } | .fUnused3
        _m046 uint32_t                                   dw_dest_context;                 //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .dwDestContext
        _m047 void*                                      pv_dest_context;                 //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .pvDestContext
        _m050 saved_context_handles_t                    saved_context_handles;           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .SavedContextHandles
        _m051 int32_t                                    param_number;                    //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .ParamNumber
        _m052 struct win::i_rpc_channel_buffer_t*        p_rpc_channel_buffer;            //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .pRpcChannelBuffer
        _m053 struct win::array_info_t*                  p_array_info;                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .pArrayInfo
        _m054 uint32_t*                                  size_ptr_count_array;            //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .SizePtrCountArray
        _m055 uint32_t*                                  size_ptr_offset_array;           //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .SizePtrOffsetArray
        _m056 uint32_t*                                  size_ptr_length_array;           //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .SizePtrLengthArray
        _m057 void*                                      p_arg_queue;                     //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .pArgQueue
        _m058 uint32_t                                   dw_stub_phase;                   //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .dwStubPhase
        _m059 void*                                      low_stack_mark;                  //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .LowStackMark
        _m060 struct win::ndr_async_message_t*           p_async_msg;                     //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .pAsyncMsg
        _m061 struct win::ndr_correlation_info_t*        p_corr_info;                     //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .pCorrInfo
        _m062 uint8_t*                                   p_corr_memory;                   //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .pCorrMemory
        _m063 void*                                      p_memory_list;                   //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .pMemoryList
        _m064 int64_t                                    p_cs_info;                       //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .pCSInfo
        _m065 uint8_t*                                   conformance_mark;                //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .ConformanceMark
        _m066 uint8_t*                                   variance_mark;                   //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .VarianceMark
        _m067 struct win::ndr_proc_context_t*            p_context;                       //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .pContext
        _m068 void*                                      context_handle_hash;             //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .ContextHandleHash
        _m069 void*                                      p_user_marshal_list;             //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .pUserMarshalList
        _m070 int64_t                                    reserved51_3;                    //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .Reserved51_3
        _m071 int64_t                                    reserved51_4;                    //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .Reserved51_4
        _m072 int64_t                                    reserved51_5;                    //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .Reserved51_5
                                                                                        
        SDK_MAGIC_PROPERTIES( "_MIDL_STUB_MESSAGE.$", 0x190, true, 0x3db4f9c8b1f52e3f );                               
        SDK_FIXED_SIZE( midl_stub_message_t, 0x190 );                                   
    };                                                                                  
};
#include "magic/midl_stub_message_t.end.hpp"
SDK_VERIFY( struct win::midl_stub_message_t::u0_saved_context_handles_t, 0x18 );
SDK_VERIFY( struct win::midl_stub_message_t, 0x190 );
