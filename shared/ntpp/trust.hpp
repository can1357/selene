#pragma once
#include <unordered_set>
#include <vector>
#include <string>
#include <memory>
#include <string_view>
#include <xstd/sha256.hpp>
#include <xstd/sha1.hpp>
#include <xstd/time.hpp>
#include <xstd/asn1.hpp>
#include <xstd/oid.hpp>
#include <nt/image.hpp>

// Basic authenticode implementation.
//
namespace ntpp::trust
{
	namespace impl
	{
		struct hashhash
		{
			template<typename T>
			size_t operator()( const T& value ) const { return ( const size_t& ) value; }
		};
	};

	// Describes the digital signature state.
	//
	struct certificate
	{
		std::string issued_to;
		std::string issued_by;
		uint64_t valid_from;
		uint64_t valid_until;
		std::vector<xstd::oid> ekus;
		std::shared_ptr<certificate> chain;
	};
	struct digital_signature
	{
		// Digest information.
		//
		bool signature_match = false;
		std::variant<std::nullopt_t, xstd::sha1_t, xstd::sha256_t> signature_digest = std::nullopt;

		// Certificate lists.
		//
		std::list<certificate> cert_list = {};

		// WHQL owner embedded in metadata.
		//
		std::unordered_set<std::string, xstd::hasher<>> corporations;

		// combines two states together.
		//
		void combine( const digital_signature& other )
		{
			// If this signature is not matching but other is, disard this.
			//
			if ( !signature_match )
			{
				*this = other;
				return;
			}

			// If other digest is hashed stronger than ours, use its digest instead.
			//
			if ( other.signature_digest.index() == 1 )
				signature_digest = other.signature_digest;

			// Combine certificates.
			//
			cert_list.insert( cert_list.end(), other.cert_list.begin(), other.cert_list.end() );
			corporations.insert( other.corporations.begin(), other.corporations.end() );
		}
	};

	// Extracts Authenticode certificates from the binary.
	//
	void extract_certs( xstd::asn1::object* root, digital_signature* dst );

	// Extracts the ASN1 object desciring the Authenticode state of the image from the PE file.
	//
	std::unique_ptr<xstd::asn1::object> extract_asn1( const std::vector<uint8_t>& data );

	// Parses a catalog file.
	//
	struct catalog : digital_signature
	{
		// List of signed PE images.
		//
		std::unordered_set<xstd::sha1_t, impl::hashhash> sha1_set;
		std::unordered_set<xstd::sha256_t, impl::hashhash> sha256_set;
	};
	std::shared_ptr<catalog> parse_cat_file( const std::vector<uint8_t>& data );

	// Parses a NT security section.
	//
	struct state : digital_signature
	{
		// Catalog signed.
		//
		bool cat_signed = false;
	};
	state parse_nt_secdir( const std::vector<uint8_t>& data );

	// Reloads the catalog list.
	//
	NO_INLINE void reload_cat_files();

	// Looks-up a catalog file given the two hashes for the digest.
	//
	std::shared_ptr<catalog> lookup_cats( const xstd::sha1_t& s1, const xstd::sha256_t& s256 );

	// Handles complete verification of a NT image.
	//
	state verify( const std::vector<uint8_t>& data );
};