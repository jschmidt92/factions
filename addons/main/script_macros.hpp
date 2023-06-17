// Internal
#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH.BUILD); versionAr[] = {MAJOR,MINOR,PATCH,BUILD}

// Path
#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

#define PATHTOR_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3
#define PATHTOR(var1) PATHTOR_SYS(PREFIX,COMPONENT,var1)
#define PATHTOER(var1,var2) PATHTOR_SYS(PREFIX,var1,var2)
#define QPATHTOR(var1) QUOTE(PATHTOR(var1))
#define QPATHTOER(var1,var2) QUOTE(PATHTOER(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

// Equipment
#define MACRO_ADDMAG(MAG,COUNT) class _xx_##MAG { \
    magazine = #MAG; \
    count = COUNT; \
}
#define MACRO_ADDWEAP(WEAP,COUNT) class _xx_##WEAP { \
    weapon = #WEAP; \
    count = COUNT; \
}
#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

// Inventory
#define ITEM_2(ITEM) ITEM,ITEM
#define ITEM_3(ITEM) ITEM,ITEM,ITEM
#define ITEM_4(ITEM) ITEM,ITEM,ITEM,ITEM
#define ITEM_5(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_6(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_7(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM
#define ITEM_8(ITEM) ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM,ITEM

// Magazines
#define MAG_2(MAG) MAG,MAG
#define MAG_3(MAG) MAG,MAG,MAG
#define MAG_4(MAG) MAG,MAG,MAG,MAG
#define MAG_5(MAG) MAG,MAG,MAG,MAG,MAG
#define MAG_6(MAG) MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_7(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG
#define MAG_8(MAG) MAG,MAG,MAG,MAG,MAG,MAG,MAG,MAG