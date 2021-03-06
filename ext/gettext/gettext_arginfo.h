/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_textdomain, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gettext, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo__ arginfo_gettext

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dgettext, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dcgettext, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bindtextdomain, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
ZEND_END_ARG_INFO()

#if HAVE_NGETTEXT
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ngettext, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_DNGETTEXT
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dngettext, 0, 4, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_DCNGETTEXT
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dcngettext, 0, 5, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_BIND_TEXTDOMAIN_CODESET
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bind_textdomain_codeset, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, codeset, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif


ZEND_FUNCTION(textdomain);
ZEND_FUNCTION(gettext);
ZEND_FUNCTION(dgettext);
ZEND_FUNCTION(dcgettext);
ZEND_FUNCTION(bindtextdomain);
#if HAVE_NGETTEXT
ZEND_FUNCTION(ngettext);
#endif
#if HAVE_DNGETTEXT
ZEND_FUNCTION(dngettext);
#endif
#if HAVE_DCNGETTEXT
ZEND_FUNCTION(dcngettext);
#endif
#if HAVE_BIND_TEXTDOMAIN_CODESET
ZEND_FUNCTION(bind_textdomain_codeset);
#endif


static const zend_function_entry ext_functions[] = {
	ZEND_FE(textdomain, arginfo_textdomain)
	ZEND_FE(gettext, arginfo_gettext)
	ZEND_FALIAS(_, gettext, arginfo__)
	ZEND_FE(dgettext, arginfo_dgettext)
	ZEND_FE(dcgettext, arginfo_dcgettext)
	ZEND_FE(bindtextdomain, arginfo_bindtextdomain)
#if HAVE_NGETTEXT
	ZEND_FE(ngettext, arginfo_ngettext)
#endif
#if HAVE_DNGETTEXT
	ZEND_FE(dngettext, arginfo_dngettext)
#endif
#if HAVE_DCNGETTEXT
	ZEND_FE(dcngettext, arginfo_dcngettext)
#endif
#if HAVE_BIND_TEXTDOMAIN_CODESET
	ZEND_FE(bind_textdomain_codeset, arginfo_bind_textdomain_codeset)
#endif
	ZEND_FE_END
};
