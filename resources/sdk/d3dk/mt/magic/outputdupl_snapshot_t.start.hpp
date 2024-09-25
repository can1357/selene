#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.Size", size, 0x0, 0x20, true, 0x90934f478da280b2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.SessionProcessCount", session_process_count, 0x20, 0x20, true, 0x875372696f060e31)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.SessionActiveConnectionsCount", session_active_connections_count, 0x40, 0x20, true, 0x9c3c94f8ec96bd45)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.NumVidPnSources", num_vid_pn_sources, 0x60, 0x20, true, 0x1ba220e1ebe52ea9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.NumOutputDuplContexts", num_output_dupl_contexts, 0x80, 0x20, true, 0x942eaf7bee6f9dfe)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::outputdupl_context_debug_info_t>), "_D3DKMT_OUTPUTDUPL_SNAPSHOT.OutputDuplDebugInfos", output_dupl_debug_infos, 0xc0, 0x0, true, 0x63602e7187b3c71)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif