#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::copyfile2_message_type_t), "COPYFILE2_MESSAGE.Type", type, 0x0, 0x20, true, 0xad37ccea7d46e38e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.dwPadding", dw_padding, 0x20, 0x20, true, 0x50b3b90f30d32b28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.dwStreamNumber", dw_stream_number, 0x0, 0x20, true, 0x203ac4d45387196d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.dwReserved", dw_reserved, 0x20, 0x20, true, 0xe5d833bafe028bca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.ChunkStarted.hSourceFile", h_source_file, 0x40, 0x40, true, 0xfb0381da014c31d1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.ChunkStarted.hDestinationFile", h_destination_file, 0x80, 0x40, true, 0x742e11a116c274cd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.uliChunkNumber", uli_chunk_number, 0xc0, 0x40, true, 0x2a945e4d9005ff5b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.uliChunkSize", uli_chunk_size, 0x100, 0x40, true, 0x7e7170a99261881b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.uliStreamSize", uli_stream_size, 0x140, 0x40, true, 0xfcf3a61409a50f11)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkStarted.uliTotalFileSize", uli_total_file_size, 0x180, 0x40, true, 0xdf54dd8128ff9301)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_chunk_started_t), "COPYFILE2_MESSAGE.Info.ChunkStarted", chunk_started, 0x0, 0xc0, true, 0x7ce1a8b938e748a9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.dwStreamNumber", dw_stream_number, 0x0, 0x20, true, 0x63bcd47903270096)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.dwFlags", dw_flags, 0x20, 0x20, true, 0x23a96a4c599904d3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.ChunkFinished.hSourceFile", h_source_file, 0x40, 0x40, true, 0x4f8f26dc7ee16fa9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.ChunkFinished.hDestinationFile", h_destination_file, 0x80, 0x40, true, 0xfb59317ca05e88e7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliChunkNumber", uli_chunk_number, 0xc0, 0x40, true, 0xde7e29e7d5f65e77)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliChunkSize", uli_chunk_size, 0x100, 0x40, true, 0x267956754b8408b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliStreamSize", uli_stream_size, 0x140, 0x40, true, 0x9b76ab815e0dbb00)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliStreamBytesTransferred", uli_stream_bytes_transferred, 0x180, 0x40, true, 0x5ba210dc61b5d82d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliTotalFileSize", uli_total_file_size, 0x1c0, 0x40, true, 0x191da47668ddafe3)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.ChunkFinished.uliTotalBytesTransferred", uli_total_bytes_transferred, 0x200, 0x40, true, 0x4558b5455e4b8f32)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_chunk_finished_t), "COPYFILE2_MESSAGE.Info.ChunkFinished", chunk_finished, 0x0, 0x40, true, 0xb1afbe365bb3db00)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.StreamStarted.dwStreamNumber", dw_stream_number, 0x0, 0x20, true, 0x40ac04eda316aa31)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.StreamStarted.dwReserved", dw_reserved, 0x20, 0x20, true, 0xbd89d7f5dd753748)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.StreamStarted.hSourceFile", h_source_file, 0x40, 0x40, true, 0x7e4fa37eed7c6934)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.StreamStarted.hDestinationFile", h_destination_file, 0x80, 0x40, true, 0xcb54924d6075b178)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamStarted.uliStreamSize", uli_stream_size, 0xc0, 0x40, true, 0x21b8e82d346c6e6e)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamStarted.uliTotalFileSize", uli_total_file_size, 0x100, 0x40, true, 0x55d4fc87a2159ad6)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_stream_started_t), "COPYFILE2_MESSAGE.Info.StreamStarted", stream_started, 0x0, 0x40, true, 0x3870789acf4bbc82)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.StreamFinished.dwStreamNumber", dw_stream_number, 0x0, 0x20, true, 0xc5e77913949b1d8d)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.StreamFinished.dwReserved", dw_reserved, 0x20, 0x20, true, 0xb8810955304565b8)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.StreamFinished.hSourceFile", h_source_file, 0x40, 0x40, true, 0xeceeeab4b5917cd4)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_MESSAGE.Info.StreamFinished.hDestinationFile", h_destination_file, 0x80, 0x40, true, 0x5a800c496851322c)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamFinished.uliStreamSize", uli_stream_size, 0xc0, 0x40, true, 0xa741c36b97ee9b3d)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamFinished.uliStreamBytesTransferred", uli_stream_bytes_transferred, 0x100, 0x40, true, 0xa9b2d0e6b616f2)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamFinished.uliTotalFileSize", uli_total_file_size, 0x140, 0x40, true, 0x67a7a2c239694bf9)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.StreamFinished.uliTotalBytesTransferred", uli_total_bytes_transferred, 0x180, 0x40, true, 0xe8239fdcd5506006)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_stream_finished_t), "COPYFILE2_MESSAGE.Info.StreamFinished", stream_finished, 0x0, 0xc0, true, 0x81f85fb4986c6f22)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.PollContinue.dwReserved", dw_reserved, 0x0, 0x20, true, 0x21254fb9784a5fd2)
#define _m39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_poll_continue_t), "COPYFILE2_MESSAGE.Info.PollContinue", poll_continue, 0x0, 0x20, true, 0x248a5489831886f9)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::copyfile2_copy_phase_t), "COPYFILE2_MESSAGE.Info.Error.CopyPhase", copy_phase, 0x0, 0x20, true, 0x672f68c8c1a772bd)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.Error.dwStreamNumber", dw_stream_number, 0x20, 0x20, true, 0xbd081126ab066ac8)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "COPYFILE2_MESSAGE.Info.Error.hrFailure", hr_failure, 0x40, 0x20, true, 0xe8b9b1277cead250)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_MESSAGE.Info.Error.dwReserved", dw_reserved, 0x60, 0x20, true, 0x7367e61377ddf1d0)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.Error.uliChunkNumber", uli_chunk_number, 0x80, 0x40, true, 0x86a52453f56d7e0e)
#define _m45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.Error.uliStreamSize", uli_stream_size, 0xc0, 0x40, true, 0xdbcd86679a336cd8)
#define _m46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.Error.uliStreamBytesTransferred", uli_stream_bytes_transferred, 0x100, 0x40, true, 0xcac981ddd149c9ec)
#define _m47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.Error.uliTotalFileSize", uli_total_file_size, 0x140, 0x40, true, 0x51ab4474a93c43f7)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "COPYFILE2_MESSAGE.Info.Error.uliTotalBytesTransferred", uli_total_bytes_transferred, 0x180, 0x40, true, 0xb2ca2a158df2fa5f)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_error_t), "COPYFILE2_MESSAGE.Info.Error", error, 0x0, 0xc0, true, 0xf837d7291cffce1c)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_info_t), "COPYFILE2_MESSAGE.Info", info, 0x40, 0x40, true, 0x262f3e9af53613b4)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#endif