#pragma once
#include <xstd/type_helpers.hpp>
#include <sdk/nt/event_descriptor_t.hpp>
#include <sdk/nt/event_header_t.hpp>
#include <sdk/nt/event_data_descriptor_t.hpp>
#include <sdk/etwp/api.hpp>
#include <ia32/hde64.hpp>

namespace ntpp::etw {
	// ETW internals.
	//
#pragma pack(push, 1)
	struct reg_entry_v2 {
		uint8_t  gap0[ 84 ];
		uint16_t sequence_number;
		uint8_t  gap56[ 2 ];
		uint64_t trace_handle;

		uint64_t ktrace_and_mask;
		uint64_t ktrace_or_mask;
		uint8_t  ktrace_flags;
		uint8_t  gap71[ 3 ];
		uint8_t  ktrace_tracing;
		uint8_t  ktrace_max_level;

		uint8_t  gap76[ 98 ];

		uint64_t utrace_and_mask;
		uint64_t utrace_or_mask;
		uint8_t  utrace_flags;
		uint8_t  gapE9[ 3 ];
		uint8_t  utrace_tracing;
		uint8_t  utrace_max_level;

		uint8_t _unk3[ 128 ];
	};
	struct reg_entry_v1 {
		uint8_t     _unk0[ 88 ];
		uint64_t    trace_handle;
		uint16_t    sequence_number;
		uint16_t    notification_flags;
		uint8_t     _unk1[ 4 ];

		uint64_t    ktrace_and_mask;
		uint64_t    ktrace_or_mask;
		uint8_t     ktrace_flags;
		uint8_t     ktrace__pad[ 3 ];
		uint8_t     ktrace_tracing;
		uint8_t     ktrace_max_level;

		uint8_t     _unk2[ 98 ];

		uint64_t    utrace_and_mask;
		uint64_t    utrace_or_mask;
		uint8_t     utrace_flags;
		uint8_t     utrace__pad[ 3 ];
		uint8_t     utrace_tracing;
		uint8_t     utrace_max_level;

		uint8_t     _unk3[ 128 ];
	};
	struct reg_handle_v1 {
		uint64_t reg_entry_ptr : 48;
		uint64_t reg_entry_seq : 16;
	};
	struct reg_handle_v2 {
		uint32_t reg_entry_handle;
		uint32_t reg_entry_seq;
	};
	struct reg_ctx {
		uint64_t   handle = {}; // 0
		uint64_t   _unk = 0; // 8
		uint64_t   or_mask = 0; // 10
		uint64_t   and_mask = 0; // 18
		uint32_t   _pad = 0; // 20
		uint32_t   enabled = 0; // 24
	};
	struct trace_data {
		nt::event_header_t           header;
		uint32_t                     _skip;
		uint32_t                     num_data;
		nt::event_data_descriptor_t* data;
	};
#pragma pack(pop)
	
	using fn_provider_handle_insert = int( * )( void*, void*, uint32_t* );
	using fn_etwp_insert_registration = void( * )( void* );

	struct ntdll_info {
		fn_provider_handle_insert   provider_handle_insert = nullptr;
		fn_etwp_insert_registration etwp_insert_registration = nullptr;
		int version = -1;

		bool find_symbols_auto( any_ptr ntdll_base ) {
			if ( !ntdll_base || !sdk::exists( etwp::insert_registration ) ) return false;

			etwp_insert_registration = ( fn_etwp_insert_registration ) sdk::resolve_for( ntdll_base, etwp::insert_registration );
			provider_handle_insert = nullptr;
			if ( sdk::exists( ntdll::provider_handle_insert ) ) {
				provider_handle_insert = ( fn_provider_handle_insert ) sdk::resolve_for( ntdll_base, ntdll::provider_handle_insert );
			}
			return true;
		}
		bool find_symbols( any_ptr etw_notification_register ) {
			if ( !etw_notification_register ) return false;

			uint8_t* c1 = nullptr;
			uint8_t* c2 = nullptr;
			int timer = 0;
			auto iterator = etw_notification_register;
			auto end =      etw_notification_register + 0x200;
			while ( iterator < end ) {
				auto ins = hde64::disasm( iterator );
				if ( ins.flags & F_ERROR ) {
					iterator++;
					continue;
				}
				iterator += ins.len;

				if ( ins.opcode == 0xE8 ) {
					auto c = iterator + std::bit_cast<int32_t>( ins.imm.imm32 );
					if ( c2 ) {
						c1 = c2;
						c2 = c;
					} else if ( c1 ) {
						c2 = c;
					} else {
						c1 = c;
						c2 = nullptr;
					}
					timer = 5;
				} else if ( --timer < 0 ) {
					c1 = c2 = nullptr;
				} else if ( ins.p_seg == 0x65 ) {
					c1 = c2 = nullptr;
				}

				/*
				.text:00000001800430FE                 call    RtlAcquireSRWLockExclusive
				.text:0000000180043103                 mov     rax, gs:30h
				.text:000000018004310C                 mov     edx, [rax+48h]
				.text:000000018004310F                 mov     [rdi+50h], edx
				.text:0000000180043112                 cmp     ebp, 0Ah

				.text:0000000180032838                 call    ProviderHandleInsert
				.text:000000018003283D                 mov     ebx, eax
				.text:000000018003283F                 test    eax, eax
				.text:0000000180032841                 jnz     loc_1800328C8
				.text:0000000180032847                 cmp     ebp, 0Ah
				*/
				if ( !provider_handle_insert ) {
					// 83 /7 ib	CMP r/m32, imm8
					if ( ins.opcode == 0x83 && ins.modrm_reg == 7 && ins.modrm_mod == 3 && ins.imm.imm8 == 0xA ) {
						if ( c1 || c2 ) {
							provider_handle_insert = fn_provider_handle_insert( c2 ? c2 : c1 );
							c1 = c2 = nullptr;
						}
						continue;
					}
				}

				/*
				.text:0000000180032860 48 8B CF                                      mov     rcx, rdi
				.text:0000000180032863 E8 D4 FC FF FF                                call    EtwpInsertRegistration
				.text:0000000180032868 48 8B CF                                      mov     rcx, rdi
				.text:000000018003286B E8 E8 FA FF FF                                call    EtwpCheckForPrivatePreEnable
				.text:0000000180032870 83 67 50 00                                   and     dword ptr [rdi+50h], 0
				.text:0000000180032874 48 8B CE                                      mov     rcx, rsi
				*/
				// 83 /4 ib	AND r/m32, imm8
				if ( ins.opcode == 0x83 && ins.modrm_reg == 4 && ins.modrm_mod == 1 && ins.imm.imm8 == 0 ) {
					if ( c1 && c2 ) {
						etwp_insert_registration = fn_etwp_insert_registration( c1 );
						return true;
					}
				}
			}
			return false;
		}
		bool find_version() {
			if ( !etwp_insert_registration ) return false;
			any_ptr iterator = etwp_insert_registration;
			for ( size_t n = 0; n != 100; n++ ) {
				auto ins = hde64::disasm( iterator );
				if ( ins.flags & F_ERROR ) {
					return false;
				}
				iterator += ins.len;

				// MOVZX	r16/32/64	r/m16
				if ( ins.opcode == 0x0F && ins.opcode2 == 0xB7 ) {
					if ( ins.disp.disp8 == offsetof( reg_entry_v1, sequence_number ) ) {
						version = 0;
					} else if ( ins.disp.disp8 == offsetof( reg_entry_v2, sequence_number ) ) {
						version = 1;
						if ( !provider_handle_insert ) return false;
					} else {
						return false;
					}
					return true;
				}
			}
			return false;
		}
	};
};