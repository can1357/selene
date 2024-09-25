#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::syntax_type_t), "_NDR_PROC_CONTEXT.CurrentSyntaxType", current_syntax_type, 0x0, 0x20, true, 0x99ad3a4382e0eff4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_info_t), "_NDR_PROC_CONTEXT.NdrInfo", ndr_info, 0x40, 0x80, true, 0x48beacd01dfbaf9f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_proc_format_t*), "_NDR_PROC_CONTEXT.Ndr64Header", ndr64_header, 0x40, 0x40, true, 0x8eb407b98f51aad9)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_PROC_CONTEXT.pProcFormat", p_proc_format, 0xc0, 0x40, true, 0x42fd2d4e03636985)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.NumberParams", number_params, 0x100, 0x20, true, 0x946535e93cda44f7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_PROC_CONTEXT.Params", params, 0x140, 0x40, true, 0x8483fa0194d8ccc0)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDR_PROC_CONTEXT.StartofStack", startof_stack, 0x180, 0x40, true, 0x9a0e7ee5d78e7c6a)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_PROC_CONTEXT.HandleType", handle_type, 0x1c0, 0x8, true, 0x85f04615b0e74143)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR_PROC_CONTEXT.CorrIncrement", corr_increment, 0x1c8, 0x8, true, 0x722f14474719a883)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_PROC_CONTEXT.SavedGenericHandle", saved_generic_handle, 0x200, 0x40, true, 0x5a85c89855efff96)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_PROC_CONTEXT.pHandleFormatSave", p_handle_format_save, 0x240, 0x40, true, 0x3454ee0dc224d6cd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_PROC_CONTEXT.DceTypeFormatString", dce_type_format_string, 0x280, 0x40, true, 0xb44b776890ef2948)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.IsAsync", is_async, 0x2c0, 0x1, true, 0x3776ccd843c251b5, 1, uint32_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.IsObject", is_object, 0x2c1, 0x1, true, 0x71e23ab08e6a2bc4, 1, uint32_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.HasPipe", has_pipe, 0x2c2, 0x1, true, 0x2b6091d35673192f, 1, uint32_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.HasComplexReturn", has_complex_return, 0x2c3, 0x1, true, 0x6cd3764fd6c8580, 1, uint32_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.NeedsResend", needs_resend, 0x2c4, 0x1, true, 0x6b5caa931fd94be2, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.UseLocator", use_locator, 0x2c5, 0x1, true, 0xcf3ffbcbdb9de146, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDR_PROC_CONTEXT.IsStubless", is_stubless, 0x2c6, 0x1, true, 0x1c21591167dbef8d, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDR_PROC_CONTEXT.Reservedleft", reservedleft, 0x2c8, 0x8, true, 0x90d3307b3e805ee3, 8, uint32_t)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.FloatDoubleMask", float_double_mask, 0x2e0, 0x20, true, 0x96c29d5bdea32a32)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.ResendCount", resend_count, 0x300, 0x20, true, 0xe5f5d1058c9a0625)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.RpcFlags", rpc_flags, 0x320, 0x20, true, 0x49534dbbaba84f3b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.ExceptionFlag", exception_flag, 0x340, 0x20, true, 0x63296b17066aaf36)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR_PROC_CONTEXT.StackSize", stack_size, 0x360, 0x20, true, 0x64498e2fa6e65ed8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_syntax_info_t*), "_NDR_PROC_CONTEXT.pSyntaxInfo", p_syntax_info, 0x380, 0x40, true, 0xd7809814313729fb)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfnrpcmemvalidate_t ), "_NDR_PROC_CONTEXT.pfnValidate", pfn_validate, 0x3c0, 0x40, true, 0xf32433d6039729ab)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDR_PROC_CONTEXT.ValidateCookie", validate_cookie, 0x400, 0x40, true, 0x22cf0ddf3719c43a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::syntax_dispatch_table_t), "_NDR_PROC_CONTEXT.SyntaxDispatch", syntax_dispatch, 0x440, 0x0, true, 0x645b3220030b8d3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_pipe_desc_t*), "_NDR_PROC_CONTEXT.pPipeDesc", p_pipe_desc, 0x640, 0x40, true, 0x2fa6fe08fbd67148)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_pointer_queue_element_t*), "_NDR_PROC_CONTEXT.pQueueFreeList", p_queue_free_list, 0x680, 0x40, true, 0xe3686a0df7ef2ebe)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_minicompute_queue_t*), "_NDR_PROC_CONTEXT.pMiniComputeQueue", p_mini_compute_queue, 0x6c0, 0x40, true, 0xc3930af407545d81)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::ndr_minicompute_queue_element_t*), "_NDR_PROC_CONTEXT.pConfQueueFreeList", p_conf_queue_free_list, 0x700, 0x40, true, 0x1003e923530ab149)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_NDR_PROC_CONTEXT.pFormatSupplement", p_format_supplement, 0x740, 0x40, true, 0x9178cd96c134f4c7)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDR_PROC_CONTEXT.CurrentActivityID", current_activity_id, 0x780, 0x80, true, 0x3099ea5dee961eac)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_alloca_context_t), "_NDR_PROC_CONTEXT.AllocateContext", allocate_context, 0x800, 0x0, true, 0x2f96563b23ac185b)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#endif