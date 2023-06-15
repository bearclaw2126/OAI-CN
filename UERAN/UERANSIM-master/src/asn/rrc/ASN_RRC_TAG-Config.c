/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_TAG-Config.h"

#include "ASN_RRC_TAG.h"
static int
memb_ASN_RRC_tag_ToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ASN_RRC_tag_ToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ASN_RRC_tag_ToReleaseList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ASN_RRC_tag_ToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_tag_ToReleaseList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_RRC_tag_ToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ASN_RRC_tag_ToReleaseList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ASN_RRC_TAG_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_RRC_tag_ToReleaseList_specs_2 = {
	sizeof(struct ASN_RRC_TAG_Config__tag_ToReleaseList),
	offsetof(struct ASN_RRC_TAG_Config__tag_ToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_tag_ToReleaseList_2 = {
	"tag-ToReleaseList",
	"tag-ToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2,
	sizeof(asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2)
		/sizeof(asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2)
		/sizeof(asn_DEF_ASN_RRC_tag_ToReleaseList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_tag_ToReleaseList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_ASN_RRC_tag_ToReleaseList_2,
	1,	/* Single element */
	&asn_SPC_ASN_RRC_tag_ToReleaseList_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ASN_RRC_tag_ToAddModList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ASN_RRC_TAG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ASN_RRC_tag_ToAddModList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ASN_RRC_tag_ToAddModList_specs_4 = {
	sizeof(struct ASN_RRC_TAG_Config__tag_ToAddModList),
	offsetof(struct ASN_RRC_TAG_Config__tag_ToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_tag_ToAddModList_4 = {
	"tag-ToAddModList",
	"tag-ToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ASN_RRC_tag_ToAddModList_tags_4,
	sizeof(asn_DEF_ASN_RRC_tag_ToAddModList_tags_4)
		/sizeof(asn_DEF_ASN_RRC_tag_ToAddModList_tags_4[0]) - 1, /* 1 */
	asn_DEF_ASN_RRC_tag_ToAddModList_tags_4,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_tag_ToAddModList_tags_4)
		/sizeof(asn_DEF_ASN_RRC_tag_ToAddModList_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_RRC_tag_ToAddModList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ASN_RRC_tag_ToAddModList_4,
	1,	/* Single element */
	&asn_SPC_ASN_RRC_tag_ToAddModList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_RRC_TAG_Config_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ASN_RRC_TAG_Config, tag_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ASN_RRC_tag_ToReleaseList_2,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_tag_ToReleaseList_constr_2,  memb_ASN_RRC_tag_ToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"tag-ToReleaseList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_TAG_Config, tag_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ASN_RRC_tag_ToAddModList_4,
		0,
		{ 0, &asn_PER_memb_ASN_RRC_tag_ToAddModList_constr_4,  memb_ASN_RRC_tag_ToAddModList_constraint_1 },
		0, 0, /* No default value */
		"tag-ToAddModList"
		},
};
static const int asn_MAP_ASN_RRC_TAG_Config_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_TAG_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_TAG_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tag-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tag-ToAddModList */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_TAG_Config_specs_1 = {
	sizeof(struct ASN_RRC_TAG_Config),
	offsetof(struct ASN_RRC_TAG_Config, _asn_ctx),
	asn_MAP_ASN_RRC_TAG_Config_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_TAG_Config_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_TAG_Config = {
	"TAG-Config",
	"TAG-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_TAG_Config_tags_1,
	sizeof(asn_DEF_ASN_RRC_TAG_Config_tags_1)
		/sizeof(asn_DEF_ASN_RRC_TAG_Config_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_TAG_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_TAG_Config_tags_1)
		/sizeof(asn_DEF_ASN_RRC_TAG_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_TAG_Config_1,
	2,	/* Elements count */
	&asn_SPC_ASN_RRC_TAG_Config_specs_1	/* Additional specs */
};

