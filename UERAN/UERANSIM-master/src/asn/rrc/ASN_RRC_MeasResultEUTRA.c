/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_MeasResultEUTRA.h"

#include "ASN_RRC_CGI-InfoEUTRA.h"
asn_TYPE_member_t asn_MBR_ASN_RRC_MeasResultEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_MeasResultEUTRA, eutra_PhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-PhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_MeasResultEUTRA, measResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_MeasQuantityResultsEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_MeasResultEUTRA, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CGI_InfoEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
};
static const int asn_MAP_ASN_RRC_MeasResultEUTRA_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_MeasResultEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-PhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cgi-Info */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_MeasResultEUTRA_specs_1 = {
	sizeof(struct ASN_RRC_MeasResultEUTRA),
	offsetof(struct ASN_RRC_MeasResultEUTRA, _asn_ctx),
	asn_MAP_ASN_RRC_MeasResultEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_MeasResultEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_MeasResultEUTRA = {
	"MeasResultEUTRA",
	"MeasResultEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1,
	sizeof(asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1)
		/sizeof(asn_DEF_ASN_RRC_MeasResultEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_MeasResultEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_ASN_RRC_MeasResultEUTRA_specs_1	/* Additional specs */
};

