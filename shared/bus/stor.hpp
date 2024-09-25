#pragma once
#include <xstd/intrinsics.hpp>
#include <algorithm>

#undef min
#undef max

#pragma pack(push, 1)

namespace ahci {
	// Config space register that holds the ABAR base address.
	//
	static constexpr uint8_t abar_register = 0x24 / sizeof( uint32_t );

	struct hba_capabilities {
		uint32_t                host_capabilities;
		uint32_t                global_host_control;
		uint32_t                interrupt_status;
		uint32_t                ports_implemented;
		uint32_t                version;
		uint32_t                ccc_control;
		uint32_t                ccc_ports;
		uint32_t                em_location;
		uint32_t                em_control;
		uint32_t                host_capabilities_ex;
		uint32_t                handoff_status;
	};
	struct hba_port {
		volatile uint32_t       command_list_lo;
		volatile uint32_t       command_list_hi;
		uint64_t                fis_base;
		uint32_t                interrupt_status;
		uint32_t                interrupt_enable;
		uint32_t                command_state;
		uint32_t                rsvd_0;
		uint32_t                task_file;
		uint32_t                signature;
		uint32_t                sata_status;
		uint32_t                sata_control;
		uint32_t                sata_error;
		uint32_t                sata_active;
		uint32_t                command_issue;
		uint32_t                sata_notification;
		uint32_t                fis_switch_control;
		uint32_t                device_sleep;
		uint32_t                rsvd_1[ 10 ];
		uint32_t                vendor_rsvd[ 4 ];
	};
	struct hba_registers {
		hba_capabilities        caps;
		uint8_t                 rsvd[ 0x34 ];
		uint8_t                 nvmhci_rsvd[ 0x40 ];
		uint8_t                 vendor_rsvd[ 0x60 ];
		hba_port                ports[ 32 ];
	};
	struct hba_command_header {
		uint8_t                 fis_length : 5; // In DWORDs.
		uint8_t                 atapi : 1;
		uint8_t                 write : 1;
		uint8_t                 prefetchable : 1;
		uint8_t                 reset : 1;
		uint8_t                 bist : 1;
		uint8_t                 clear_busy : 1;
		uint8_t                 rsvd_0 : 1;
		uint8_t                 pmp : 4;
		uint16_t                len_prdt;
		volatile uint32_t       prdt_bytes_transferred;
		uint64_t                command_table_base;
		uint32_t                rsvd_1[ 4 ];
	};
	struct hba_prdt_entry {
		uint64_t                data_base;
		uint32_t                rsvd_0;
		uint32_t                length : 22;
		uint32_t                rsvd_1 : 9;
		uint32_t                interrupt : 1;
	};
	struct alignas( 128 ) hba_command_table {
		uint8_t                 fis[ 64 ];
		uint8_t                 acmd[ 16 ];
		uint8_t                 rsvd[ 48 ];
		hba_prdt_entry          prdt[ 1 ];
	};
	struct alignas( 1024 ) hba_command_list {
		hba_command_header      commands[ 32 ];
	};
	enum class fis_type : uint8_t {
		reg_h2d = 0x27,	        // Register FIS - host to device
		reg_d2h = 0x34,	        // Register FIS - device to host
		dma_act = 0x39,	        // DMA activate FIS - device to host
		dma_setup = 0x41,	        // DMA setup FIS - bidirectional
		data = 0x46,	        // Data FIS - bidirectional
		bist = 0x58,	        // BIST activate FIS - bidirectional
		pio_setup = 0x5F,	        // PIO setup FIS - device to host
		dev_bits = 0xA1,	        // Set device bits FIS - device to host
	};
	struct fis_h2d {
		fis_type                type;		    // FIS_TYPE_REG_H2D
		uint8_t                 pmport : 4;		// Port multiplier
		uint8_t                 rsv0 : 3;		// Reserved
		uint8_t                 c : 1;			// 1: Command, 0: Control
		uint8_t                 command;		// Command register
		uint8_t                 featurel;		// Feature register, 7:0
		uint8_t                 lba0;			// LBA low register, 7:0
		uint8_t                 lba1;			// LBA mid register, 15:8
		uint8_t                 lba2;			// LBA high register, 23:16
		uint8_t                 device;			// Device register
		uint8_t                 lba3;			// LBA register, 31:24
		uint8_t                 lba4;			// LBA register, 39:32
		uint8_t                 lba5;			// LBA register, 47:40
		uint8_t                 featureh;		// Feature register, 15:8
		uint8_t                 countl;			// Count register, 7:0
		uint8_t                 counth;			// Count register, 15:8
		uint8_t                 icc;			// Isochronous command completion
		uint8_t                 control;		// Control register
		uint8_t                 rsv1[ 4 ];		// Reserved
	};
};
namespace ata {
	struct string_iterator {
		// Declare iterator traits.
		//
		using iterator_category = std::random_access_iterator_tag;
		using difference_type = int64_t;
		using value_type = char;
		using reference = value_type&;
		using pointer = value_type*;

		// Storage.
		//
		uint16_t* ptr = nullptr;
		uint8_t   flip = 0;

		// Support random iteration.
		//
		string_iterator& operator+=( int64_t diff ) {
			uintptr_t miss = uintptr_t( ptr ) & 1;
			intptr_t va = intptr_t( ptr - miss ) + flip;
			va += diff;
			ptr = ( uint16_t* ) ( ( va & ~1 ) + miss );
			flip = uint8_t( va & 1 );
			return *this;
		}
		string_iterator& operator++() { return *this += 1; }
		string_iterator& operator--() { return *this -= 1; }
		string_iterator& operator-=( int64_t diff ) { return *this += -diff; }
		string_iterator operator+( ptrdiff_t d ) const { auto s = *this; s += d; return s; }
		string_iterator operator-( ptrdiff_t d ) const { auto s = *this; s -= d; return s; }
		string_iterator operator++( int ) { auto s = *this; operator++(); return s; }
		string_iterator operator--( int ) { auto s = *this; operator--(); return s; }

		// Comparison against another iterator.
		//
		auto operator<=>( const string_iterator& other ) const noexcept = default;

		// Distance calculation.
		//
		ptrdiff_t operator-( const string_iterator& other ) const {
			return ( ptrdiff_t( ptr ) + flip ) - ( ptrdiff_t( other.ptr ) + other.flip );
		}

		// Dereferencing.
		//
		value_type& operator*() const { return *( pointer( ptr ) + !flip ); }
		value_type* operator->() const { return &**this; }
	};

	template<size_t WordCount>
	struct string {
		// Container traits.
		//
		using value_type = char;
		using iterator = string_iterator;
		using const_iterator = string_iterator;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		// Storage.
		//
		uint16_t raw_data[ WordCount ] = { 0x2020 };

		// String-view, ish.
		//
		string_iterator raw_begin() const { return { ( uint16_t* ) std::begin( raw_data ), false }; }
		string_iterator raw_end() const { return { ( uint16_t* ) std::end( raw_data ), false }; }
		string_iterator begin() const {
			auto it = raw_begin();
			while ( it != raw_end() && *it == ' ' )
				++it;
			return it;
		}
		string_iterator end() const {
			auto it = raw_end();
			while ( it != raw_begin() && ( *std::prev( it ) == ' ' || *std::prev( it ) <= 0x1E || *std::prev( it ) >= 0x7f ) ) {
				--it;
			}
			return it;
		}
		size_t length() const { return end() - begin(); }
		size_t size() const { return end() - begin(); }
		bool empty() const { return end() == begin(); }
		reverse_iterator rbegin() { return std::reverse_iterator{ end() }; }
		reverse_iterator rend() { return std::reverse_iterator{ begin() }; }
		const_reverse_iterator rbegin() const { return std::reverse_iterator{ end() }; }
		const_reverse_iterator rend() const { return std::reverse_iterator{ begin() }; }
		char& at( size_t n ) const { return *( begin() + n ); }
		char& operator[]( size_t n ) const { return at( n ); }
		char& front() const { return *begin(); }
		char& back() const { return *std::prev( end() ); }

		template<typename H>
		void hash( H& hash ) const {
			for ( auto& c : *this ) {
				hash.add_bytes( ( uint8_t* ) &c, 1 );
			}
		}

		// ATA to ASCII string conversion.
		//
		std::string to_string() const { return std::string{ begin(), end() }; }
	};

	struct string_view {
		// Container traits.
		//
		using value_type = char;
		using iterator = string_iterator;
		using const_iterator = string_iterator;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		// Storage.
		//
		string_iterator pos = {};
		size_t count = 0;

		// Construction.
		//
		string_view() {}
		string_view( string_iterator a, string_iterator b ) : pos( a ), count( b - a ) {}
		string_view( string_iterator a, size_t n ) : pos( a ), count( n ) {}
		template<size_t N>
		string_view( string<N>& a ) : pos( a.begin() ), count( a.end() - pos ) {}

		string_view( string_view&& ) noexcept = default;
		string_view( const string_view& ) = default;
		string_view& operator=( string_view&& ) noexcept = default;
		string_view& operator=( const string_view& ) = default;

		// String-view, ish.
		//
		string_iterator begin() const { return pos; }
		string_iterator end() const { return begin() + count; }
		size_t length() const { return end() - begin(); }
		size_t size() const { return end() - begin(); }
		bool empty() const { return end() == begin(); }
		reverse_iterator rbegin() { return std::reverse_iterator{ end() }; }
		reverse_iterator rend() { return std::reverse_iterator{ begin() }; }
		const_reverse_iterator rbegin() const { return std::reverse_iterator{ end() }; }
		const_reverse_iterator rend() const { return std::reverse_iterator{ begin() }; }
		char& at( size_t n ) const { return *( begin() + n ); }
		char& operator[]( size_t n ) const { return at( n ); }
		char& front() const { return *begin(); }
		char& back() const { return *std::prev( end() ); }
		void remove_prefix( size_t n ) {
			pos += n;
			count -= n;
		}
		void remove_suffix( size_t n ) {
			count -= n;
		}
		string_view substr( size_t off, size_t n = std::string::npos ) const {
			n = std::min( n, count - off );
			return { pos + off, n };
		}
		size_t find( char c ) const {
			auto it = std::find( begin(), end(), c );
			return it == end() ? std::string::npos : it - begin();
		}

		template<typename H>
		void hash( H& hash ) const {
			for ( auto& c : *this ) {
				hash.add_bytes( ( uint8_t* ) &c, 1 );
			}
		}

		// ATA to ASCII string conversion.
		//
		std::string to_string() const { return std::string{ begin(), end() }; }
	};

	struct identification {
		static constexpr uint8_t opcode = 0xEC;

		struct {
			uint16_t reserved1 : 1;
			uint16_t retired3 : 1;
			uint16_t response_incomplete : 1;
			uint16_t retired2 : 3;
			uint16_t fixed_device : 1;
			uint16_t removable_media : 1;
			uint16_t retired1 : 7;
			uint16_t device_type : 1;
		} general_configuration;
		uint16_t num_cylinders;
		uint16_t reserved_word2;
		uint16_t num_heads;
		uint16_t retired1[ 2 ];
		uint16_t num_sectors_per_track;
		uint16_t vendor_unique1[ 3 ];
		string<10> serial_number;
		uint16_t retired2[ 2 ];
		uint16_t obsolete1;
		string<4> firmware_revision;
		string<20> model_number;
		uint8_t  maximum_block_transfer;
		uint8_t  vendor_unique2;
		uint16_t reserved_word48;
		struct {
			uint8_t  reserved_byte49;
			uint8_t  dma_supported : 1;
			uint8_t  lba_supported : 1;
			uint8_t  iordy_disable : 1;
			uint8_t  iordy_supported : 1;
			uint8_t  reserved1 : 1;
			uint8_t  standyby_timer_support : 1;
			uint8_t  reserved2 : 2;
			uint16_t reserved_word50;
		} capabilities;
		uint16_t obsolete_words51[ 2 ];
		uint16_t translation_fields_valid : 3;
		uint16_t reserved3 : 13;
		uint16_t number_of_current_cylinders;
		uint16_t number_of_current_heads;
		uint16_t current_sectors_per_track;
		uint32_t  current_sector_capacity;
		uint8_t  current_multi_sector_setting;
		uint8_t  multi_sector_setting_valid : 1;
		uint8_t  reserved_byte59 : 7;
		uint32_t  user_addressable_sectors;
		uint16_t obsolete_word62;
		uint16_t multi_word_dmasupport : 8;
		uint16_t multi_word_dmaactive : 8;
		uint16_t advanced_piomodes : 8;
		uint16_t reserved_byte64 : 8;
		uint16_t minimum_mwxfer_cycle_time;
		uint16_t recommended_mwxfer_cycle_time;
		uint16_t minimum_piocycle_time;
		uint16_t minimum_piocycle_time_iordy;
		uint16_t reserved_words69[ 6 ];
		uint16_t queue_depth : 5;
		uint16_t reserved_word75 : 11;
		uint16_t reserved_words76[ 4 ];
		uint16_t major_revision;
		uint16_t minor_revision;
		struct {
			uint16_t smart_commands : 1;
			uint16_t security_mode : 1;
			uint16_t removable_media_feature : 1;
			uint16_t power_management : 1;
			uint16_t reserved1 : 1;
			uint16_t write_cache : 1;
			uint16_t look_ahead : 1;
			uint16_t release_interrupt : 1;
			uint16_t service_interrupt : 1;
			uint16_t device_reset : 1;
			uint16_t host_protected_area : 1;
			uint16_t obsolete1 : 1;
			uint16_t write_buffer : 1;
			uint16_t read_buffer : 1;
			uint16_t nop : 1;
			uint16_t obsolete2 : 1;
			uint16_t download_microcode : 1;
			uint16_t dma_queued : 1;
			uint16_t cfa : 1;
			uint16_t advanced_pm : 1;
			uint16_t msn : 1;
			uint16_t power_up_in_standby : 1;
			uint16_t manual_power_up : 1;
			uint16_t reserved2 : 1;
			uint16_t set_max : 1;
			uint16_t acoustics : 1;
			uint16_t big_lba : 1;
			uint16_t device_config_overlay : 1;
			uint16_t flush_cache : 1;
			uint16_t flush_cache_ext : 1;
			uint16_t resrved3 : 2;
			uint16_t smart_error_log : 1;
			uint16_t smart_self_test : 1;
			uint16_t media_serial_number : 1;
			uint16_t media_card_pass_through : 1;
			uint16_t streaming_feature : 1;
			uint16_t gp_logging : 1;
			uint16_t write_fua : 1;
			uint16_t write_queued_fua : 1;
			uint16_t wwn64bit : 1;
			uint16_t urgread_stream : 1;
			uint16_t urgwrite_stream : 1;
			uint16_t reserved_for_tech_report : 2;
			uint16_t idle_with_unload_feature : 1;
			uint16_t reserved4 : 2;
		} command_set_support;
		struct {
			uint16_t smart_commands : 1;
			uint16_t security_mode : 1;
			uint16_t removable_media_feature : 1;
			uint16_t power_management : 1;
			uint16_t reserved1 : 1;
			uint16_t write_cache : 1;
			uint16_t look_ahead : 1;
			uint16_t release_interrupt : 1;
			uint16_t service_interrupt : 1;
			uint16_t device_reset : 1;
			uint16_t host_protected_area : 1;
			uint16_t obsolete1 : 1;
			uint16_t write_buffer : 1;
			uint16_t read_buffer : 1;
			uint16_t nop : 1;
			uint16_t obsolete2 : 1;
			uint16_t download_microcode : 1;
			uint16_t dma_queued : 1;
			uint16_t cfa : 1;
			uint16_t advanced_pm : 1;
			uint16_t msn : 1;
			uint16_t power_up_in_standby : 1;
			uint16_t manual_power_up : 1;
			uint16_t reserved2 : 1;
			uint16_t set_max : 1;
			uint16_t acoustics : 1;
			uint16_t big_lba : 1;
			uint16_t device_config_overlay : 1;
			uint16_t flush_cache : 1;
			uint16_t flush_cache_ext : 1;
			uint16_t resrved3 : 2;
			uint16_t smart_error_log : 1;
			uint16_t smart_self_test : 1;
			uint16_t media_serial_number : 1;
			uint16_t media_card_pass_through : 1;
			uint16_t streaming_feature : 1;
			uint16_t gp_logging : 1;
			uint16_t write_fua : 1;
			uint16_t write_queued_fua : 1;
			uint16_t wwn64bit : 1;
			uint16_t urgread_stream : 1;
			uint16_t urgwrite_stream : 1;
			uint16_t reserved_for_tech_report : 2;
			uint16_t idle_with_unload_feature : 1;
			uint16_t reserved4 : 2;
		} command_set_active;
		uint16_t ultra_dmasupport : 8;
		uint16_t ultra_dmaactive : 8;
		uint16_t reserved_word89[ 4 ];
		uint16_t hardware_reset_result;
		uint16_t current_acoustic_value : 8;
		uint16_t recommended_acoustic_value : 8;
		uint16_t reserved_word95[ 5 ];
		uint32_t  max48bit_lba[ 2 ];
		uint16_t streaming_transfer_time;
		uint16_t reserved_word105;
		struct {
			uint16_t logical_sectors_per_physical_sector : 4;
			uint16_t reserved0 : 8;
			uint16_t logical_sector_longer_than256words : 1;
			uint16_t multiple_logical_sectors_per_physical_sector : 1;
			uint16_t reserved1 : 2;
		} physical_logical_sector_size;
		uint16_t inter_seek_delay;
		uint16_t world_wide_name[ 4 ];
		uint16_t reserved_for_world_wide_name128[ 4 ];
		uint16_t reserved_for_tlc_technical_report;
		uint16_t words_per_logical_sector[ 2 ];
		struct {
			uint16_t reserved_for_drq_technical_report : 1;
			uint16_t write_read_verify_supported : 1;
			uint16_t reserved01 : 11;
			uint16_t reserved1 : 2;
		} command_set_support_ext;
		struct {
			uint16_t reserved_for_drq_technical_report : 1;
			uint16_t write_read_verify_enabled : 1;
			uint16_t reserved01 : 11;
			uint16_t reserved1 : 2;
		} command_set_active_ext;
		uint16_t reserved_for_expanded_supportand_active[ 6 ];
		uint16_t msn_support : 2;
		uint16_t reserved_word1274 : 14;
		struct {
			uint16_t security_supported : 1;
			uint16_t security_enabled : 1;
			uint16_t security_locked : 1;
			uint16_t security_frozen : 1;
			uint16_t security_count_expired : 1;
			uint16_t enhanced_security_erase_supported : 1;
			uint16_t reserved0 : 2;
			uint16_t security_level : 1;
			uint16_t reserved1 : 7;
		} security_status;
		uint16_t reserved_word129[ 31 ];
		struct {
			uint16_t maximum_current_in_ma2 : 12;
			uint16_t cfa_power_mode1disabled : 1;
			uint16_t cfa_power_mode1required : 1;
			uint16_t reserved0 : 1;
			uint16_t word160supported : 1;
		} cfa_power_model;
		uint16_t reserved_for_cfa_word161[ 8 ];
		struct {
			uint16_t supports_trim : 1;
			uint16_t reserved0 : 15;
		} data_set_management_feature;
		uint16_t reserved_for_cfa_word170[ 6 ];
		uint16_t current_media_serial_number[ 30 ];
		uint16_t reserved_word206;
		uint16_t reserved_word207[ 2 ];
		struct {
			uint16_t alignment_of_logical_within_physical : 14;
			uint16_t word209supported : 1;
			uint16_t reserved0 : 1;
		} block_alignment;
		uint16_t write_read_verify_sector_count_mode3only[ 2 ];
		uint16_t write_read_verify_sector_count_mode2only[ 2 ];
		struct {
			uint16_t nvcache_power_mode_enabled : 1;
			uint16_t reserved0 : 3;
			uint16_t nvcache_feature_set_enabled : 1;
			uint16_t reserved1 : 3;
			uint16_t nvcache_power_mode_version : 4;
			uint16_t nvcache_feature_set_version : 4;
		} nvcache_capabilities;
		uint16_t nvcache_size_lsw;
		uint16_t nvcache_size_msw;
		uint16_t nominal_media_rotation_rate;
		uint16_t reserved_word218;
		struct {
			uint8_t nvcache_estimated_time_to_spin_up_in_seconds;
			uint8_t reserved;
		} nvcache_options;
		uint16_t reserved_word220[ 35 ];
		uint16_t signature : 8;
		uint16_t checksum : 8;
	};
};

namespace nvme {
	// Config space register that holds the MBAR base address.
	//
	static constexpr uint8_t mbar_register = 0x10 / sizeof( uint32_t );

	// Description of the NVME registers.
	//
	struct bar_registers {
		uint16_t          maximum_queue_entries;

		uint16_t          contiguous_queue_required : 1;
		uint16_t          arbitration_supported : 2;
		uint16_t          rsvd_0 : 5;
		uint16_t          timeout : 8; // In 500ms units.

		uint16_t          doorbell_stride : 4; // Stride = 4 << value
		uint16_t          nvm_subsystem_reset_supported : 1;
		uint16_t          command_sets_supported : 8;
		uint16_t          boot_partition_support : 1;
		uint16_t          rsvd_1 : 2;

		uint16_t          memory_page_size_min : 4;
		uint16_t          memory_page_size_max : 4;
		uint16_t          persistent_memory_supported : 1;
		uint16_t          controller_memory_buffer_supported : 1;
		uint16_t          rsvd_2 : 6;

		uint32_t          version;
		uint32_t          int_mask_set;
		uint32_t          int_mask_clear;
		uint32_t          cc_config;
		uint32_t          rsvd_3;
		uint32_t          cc_status;
		uint32_t          nvm_subsystem_reset;
		uint16_t          aq_submit_size : 12;
		uint16_t          rsvd_4 : 4;
		uint16_t          aq_complete_size : 12;
		uint16_t          rsvd_5 : 4;
		uint32_t          aq_submit_lo;
		uint32_t          aq_submit_hi;
		uint32_t          aq_complete_lo;
		uint32_t          aq_complete_hi;
		uint8_t           pad_0[ 0xFC8 ]; // Boot parition / buffering / non-volatile memory details.
		// ... I/O queues.
	};
	static_assert( sizeof( bar_registers ) == 0x1000 );
	enum class data_transfer_type : uint16_t
	{
		prp_prp = 0b00,
		sgl_prp = 0b01,
		sgl_sgl = 0b10,
		reserved = 0b11,
	};
	struct submission_entry {
		uint16_t           opcode : 8 = 0;
		uint16_t           fused : 2 = 0;
		uint16_t           rsvd_0 : 4 = 0;
		data_transfer_type psdt : 2 = data_transfer_type::prp_prp;
		uint16_t           cid = 0;
		uint32_t           nsid_id = 0;
		uint64_t           rsvd_1 = 0;
		uint64_t           metadata = 0;
		uint64_t           data_pointers[ 2 ] = { 0 };
		uint32_t           command_info[ 6 ] = { 0 }; // CDW10-CDW15.
	};
	struct completion_entry {
		uint32_t           command_info;
		uint32_t           rsvd_0;
		uint16_t           submit_head;
		uint16_t           submit_queue_id;
		uint16_t           cid;
		uint16_t           phase : 1;
		uint16_t           status : 15;
	};

	struct error_log_page {
		uint64_t        error_count;
		uint16_t  sqid;
		uint16_t  cmdid;
		uint16_t  status_field;
		uint16_t  parm_error_location;
		uint64_t        lba;
		uint32_t    nsid;
		uint8_t   vs;
		uint8_t   resv[ 35 ];
	};

	struct id_power_state {
		uint16_t  max_power; // centiwatts
		uint8_t   rsvd2;
		uint8_t   flags;
		uint32_t    entry_lat; // microseconds
		uint32_t    exit_lat;  // microseconds
		uint8_t   read_tput;
		uint8_t   read_lat;
		uint8_t   write_tput;
		uint8_t   write_lat;
		uint16_t  idle_power;
		uint8_t   idle_scale;
		uint8_t   rsvd19;
		uint16_t  active_power;
		uint8_t   active_work_scale;
		uint8_t   rsvd23[ 9 ];
	};

	struct identity {
		static constexpr uint8_t opcode = 0x06;

		uint16_t  vid;
		uint16_t  ssvid;
		char            sn[ 20 ];
		char            mn[ 40 ];
		char            fr[ 8 ];
		uint8_t   rab;
		uint8_t   ieee[ 3 ];
		uint8_t   cmic;
		uint8_t   mdts;
		uint16_t  cntlid;
		uint32_t    ver;
		uint32_t    rtd3r;
		uint32_t    rtd3e;
		uint32_t    oaes;
		uint32_t    ctratt;
		uint8_t   rsvd100[ 156 ];
		uint16_t  oacs;
		uint8_t   acl;
		uint8_t   aerl;
		uint8_t   frmw;
		uint8_t   lpa;
		uint8_t   elpe;
		uint8_t   npss;
		uint8_t   avscc;
		uint8_t   apsta;
		uint16_t  wctemp;
		uint16_t  cctemp;
		uint16_t  mtfa;
		uint32_t    hmpre;
		uint32_t    hmmin;
		uint8_t   tnvmcap[ 16 ];
		uint8_t   unvmcap[ 16 ];
		uint32_t    rpmbs;
		uint16_t  edstt;
		uint8_t   dsto;
		uint8_t   fwug;
		uint16_t  kas;
		uint16_t  hctma;
		uint16_t  mntmt;
		uint16_t  mxtmt;
		uint32_t    sanicap;
		uint8_t   rsvd332[ 180 ];
		uint8_t   sqes;
		uint8_t   cqes;
		uint16_t  maxcmd;
		uint32_t    nn;
		uint16_t  oncs;
		uint16_t  fuses;
		uint8_t   fna;
		uint8_t   vwc;
		uint16_t  awun;
		uint16_t  awupf;
		uint8_t   nvscc;
		uint8_t   rsvd531;
		uint16_t  acwu;
		uint8_t   rsvd534[ 2 ];
		uint32_t    sgls;
		uint8_t   rsvd540[ 228 ];
		char			      subnqn[ 256 ];
		uint8_t   rsvd1024[ 768 ];
		uint32_t    ioccsz;
		uint32_t    iorcsz;
		uint16_t  icdoff;
		uint8_t   ctrattr;
		uint8_t   msdbd;
		uint8_t   rsvd1804[ 244 ];
		struct id_power_state  psd[ 32 ];
		uint8_t   vs[ 1024 ];
	};

	struct lbaf {
		uint16_t  ms;
		uint8_t   ds;
		uint8_t   rp;
	};

	struct id_ns {
		uint64_t        nsze;
		uint64_t        ncap;
		uint64_t        nuse;
		uint8_t   nsfeat;
		uint8_t   nlbaf;
		uint8_t   flbas;
		uint8_t   mc;
		uint8_t   dpc;
		uint8_t   dps;
		uint8_t   nmic;
		uint8_t   rescap;
		uint8_t   fpi;
		uint8_t   rsvd33;
		uint16_t  nawun;
		uint16_t  nawupf;
		uint16_t  nacwu;
		uint16_t  nabsn;
		uint16_t  nabo;
		uint16_t  nabspf;
		uint8_t   rsvd46[ 2 ];
		uint8_t   nvmcap[ 16 ];
		uint8_t   rsvd64[ 40 ];
		uint8_t   nguid[ 16 ];
		uint8_t   eui64[ 8 ];
		struct lbaf  lbaf[ 16 ];
		uint8_t   rsvd192[ 192 ];
		uint8_t   vs[ 3712 ];
	};

	struct smart_log {
		uint8_t  critical_warning;
		uint8_t  temperature[ 2 ];
		uint8_t  avail_spare;
		uint8_t  spare_thresh;
		uint8_t  percent_used;
		uint8_t  rsvd6[ 26 ];
		uint8_t  data_units_read[ 16 ];
		uint8_t  data_units_written[ 16 ];
		uint8_t  host_reads[ 16 ];
		uint8_t  host_writes[ 16 ];
		uint8_t  ctrl_busy_time[ 16 ];
		uint8_t  power_cycles[ 16 ];
		uint8_t  power_on_hours[ 16 ];
		uint8_t  unsafe_shutdowns[ 16 ];
		uint8_t  media_errors[ 16 ];
		uint8_t  num_err_log_entries[ 16 ];
		uint32_t   warning_temp_time;
		uint32_t   critical_comp_time;
		uint16_t temp_sensor[ 8 ];
		uint32_t   thm_temp1_trans_count;
		uint32_t   thm_temp2_trans_count;
		uint32_t   thm_temp1_total_time;
		uint32_t   thm_temp2_total_time;
		uint8_t  rsvd232[ 280 ];
	};

	enum admin_opcode : uint16_t {
		admin_delete_sq = 0x00,
		admin_create_sq = 0x01,
		admin_get_log_page = 0x02,
		admin_delete_cq = 0x04,
		admin_create_cq = 0x05,
		admin_identify = 0x06,
		admin_abort_cmd = 0x08,
		admin_set_features = 0x09,
		admin_get_features = 0x0a,
		admin_async_event = 0x0c,
		admin_ns_mgmt = 0x0d,
		admin_activate_fw = 0x10,
		admin_download_fw = 0x11,
		admin_ns_attach = 0x15,
		admin_format_nvm = 0x80,
		admin_security_send = 0x81,
		admin_security_recv = 0x82,
	};

	enum direction {
		no_data = 0x0, data_out = 0x1, data_in = 0x2, data_io = 0x3
	};
	static constexpr direction opcode_to_direction( uint16_t opcode ) {
		return direction( opcode & 0x3 );
	}
};
#pragma pack(pop)