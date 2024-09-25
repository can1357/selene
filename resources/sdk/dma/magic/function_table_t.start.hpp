#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DMA_FUNCTION_TABLE.InitializeController", initialize_controller, 0x0, 0x40, true, 0x47ade37db480f7a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct dma::request_line_binding_description_t*)>*), "_DMA_FUNCTION_TABLE.ValidateRequestLineBinding", validate_request_line_binding, 0x40, 0x40, true, 0xb858d25165e0f0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, uint32_t)>*), "_DMA_FUNCTION_TABLE.QueryMaxFragments", query_max_fragments, 0x80, 0x40, true, 0xc45e1033ec74ed0e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, struct dma::scatter_gather_list_t*, int64_t, uint8_t, uint8_t)>*), "_DMA_FUNCTION_TABLE.ProgramChannel", program_channel, 0xc0, 0x40, true, 0x761e1900e2fc9c3f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, void*)>*), "_DMA_FUNCTION_TABLE.ConfigureChannel", configure_channel, 0x100, 0x40, true, 0xce34b2ebec57726b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_DMA_FUNCTION_TABLE.FlushChannel", flush_channel, 0x140, 0x40, true, 0x7766c60d2810142e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t*, enum dma::interrupt_type_t*)>*), "_DMA_FUNCTION_TABLE.HandleInterrupt", handle_interrupt, 0x180, 0x40, true, 0xbcd5322b1e56c328)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t)>*), "_DMA_FUNCTION_TABLE.ReadDmaCounter", read_dma_counter, 0x1c0, 0x40, true, 0xe5ee512150c67bb2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, void*, int64_t)>*), "_DMA_FUNCTION_TABLE.ReportCommonBuffer", report_common_buffer, 0x200, 0x40, true, 0xd09f359a88570d9a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t)>*), "_DMA_FUNCTION_TABLE.CancelTransfer", cancel_transfer, 0x240, 0x40, true, 0x55e9fb1c9f667e32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif