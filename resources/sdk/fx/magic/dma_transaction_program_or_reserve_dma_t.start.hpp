#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_program_dma_t ), "FxDmaTransactionProgramOrReserveDma.Method.ProgramDma", program_dma, 0x0, 0x40, true, 0x50e50c10cccc095)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_reserve_dma_t ), "FxDmaTransactionProgramOrReserveDma.Method.ReserveDma", reserve_dma, 0x0, 0x40, true, 0x9b92a59772a08eb2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_method_t), "FxDmaTransactionProgramOrReserveDma.Method", method, 0x0, 0x40, true, 0xc83f9836ca5f74de)
#else
#define _m00
#define _m01
#define _m02
#endif