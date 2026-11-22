/* Match the reference glyph tables and adjacent font-builder functions. */
SECTIONS {
  /DISCARD/ : {
    *(.text._ZN24ImFontGlyphRangesBuilder7AddTextEPKcS1_)
    *(.text._ZN5ImGui24RenderRectFilledWithHoleEP10ImDrawList6ImRectS2_jf)
    *(.text.*ImFontAtlas*GetGlyphRangesKorean* .rodata.*ImFontAtlas*GetGlyphRangesKorean*)
    *(.text.*ImFontAtlas*GetGlyphRangesChinese* .rodata.*ImFontAtlas*GetGlyphRangesChinese* .bss.*ImFontAtlas*GetGlyphRangesChinese*)
    *(.text.*ImFontAtlas*GetGlyphRangesJapanese* .rodata.*ImFontAtlas*GetGlyphRangesJapanese* .bss.*ImFontAtlas*GetGlyphRangesJapanese*)
    *(.text.*ImFontAtlas*GetGlyphRangesThai* .rodata.*ImFontAtlas*GetGlyphRangesThai*)
    *(.text.*ImFontAtlas*GetGlyphRangesVietnamese* .rodata.*ImFontAtlas*GetGlyphRangesVietnamese*)
  }
}
INSERT AFTER .rodata;
