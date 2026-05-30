/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ < │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │`    │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_LABK (GRAVE)          // <
#define FR_AMPR (N1)             // &
#define FR_EACU (N2)             // é
#define FR_DQUO (N3)             // "
#define FR_QUOT (N4)             // '
#define FR_LPRN (N5)             // (
#define FR_SECT (N6)             // §
#define FR_EGRV (N7)             // è
#define FR_EXLM (N8)             // !
#define FR_CCED (N9)             // ç
#define FR_AGRV (N0)             // à
#define FR_RPRN (MINUS)          // )
#define FR_MINS (EQUAL)          // -

// Row 2
#define FR_A (Q)                 // A
#define FR_Z (W)                 // Z
#define FR_E (E)                 // E
#define FR_R (R)                 // R
#define FR_T (T)                 // T
#define FR_Y (Y)                 // Y
#define FR_U (U)                 // U
#define FR_I (I)                 // I
#define FR_O (O)                 // O
#define FR_P (P)                 // P
#define FR_CIRC (LBKT)           // ^ (dead)
#define FR_DLR (RBKT)            // $
#define FR_GRV (BACKSLASH)       // ` (dead)

// Row 3
#define FR_Q (A)                 // Q
#define FR_S (S)                 // S
#define FR_D (D)                 // D
#define FR_F (F)                 // F
#define FR_G (G)                 // G
#define FR_H (H)                 // H
#define FR_J (J)                 // J
#define FR_K (K)                 // K
#define FR_L (L)                 // L
#define FR_M (SEMI)              // M
#define FR_UGRV (APOS)           // ù

// Row 4
#define FR_W (Z)                 // W
#define FR_X (X)                 // X
#define FR_C (C)                 // C
#define FR_V (V)                 // V
#define FR_B (B)                 // B
#define FR_N (N)                 // N
#define FR_COMM (M)              // ,
#define FR_SCLN (COMMA)          // ;
#define FR_COLN (DOT)            // :
#define FR_EQL (SLASH)           // =


/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ > │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ _ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ * │   £ │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │ % │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │ ? │ . │ / │ + │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_RABK RS(FR_LABK)      // >
#define FR_1    RS(FR_AMPR)      // 1
#define FR_2    RS(FR_EACU)      // 2
#define FR_3    RS(FR_DQUO)      // 3
#define FR_4    RS(FR_QUOT)      // 4
#define FR_5    RS(FR_LPRN)      // 5
#define FR_6    RS(FR_SECT)      // 6
#define FR_7    RS(FR_EGRV)      // 7
#define FR_8    RS(FR_EXLM)      // 8
#define FR_9    RS(FR_CCED)      // 9
#define FR_0    RS(FR_AGRV)      // 0
#define FR_DEG  RS(FR_RPRN)      // °
#define FR_UNDS RS(FR_MINS)      // _

// Row 2
#define FR_DIAE RS(FR_CIRC)      // ¨ (dead)
#define FR_ASTR RS(FR_DLR)       // *
#define FR_PND  RS(FR_GRV)       // £

// Row 3
#define FR_PERC RS(FR_UGRV)      // %

// Row 4
#define FR_QUES RS(FR_COMM)      // ?
#define FR_DOT  RS(FR_SCLN)      // .
#define FR_SLSH RS(FR_COLN)      // /
#define FR_PLUS RS(FR_EQL)       // +


/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │ { │   │   │   │   │   │ } │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ æ │   │ ê │   │   │   │   │ î │ œ │   │ ô │   │ @   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │   │        │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │    │   │   │   │   │   │   │ ~ │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_LCBR RA(FR_LPRN)      // {
#define FR_RCBR RA(FR_RPRN)      // }

// Row 2
#define FR_AE RA(FR_A)           // æ
#define FR_ECIRC RA(FR_E)        // ê
#define FR_ICIRC RA(FR_I)        // î
#define FR_OE RA(FR_O)           // œ
#define FR_OCIRC RA(FR_CIRC)     // ô
#define FR_AT RA(FR_GRV)         // @


// Row 4
#define FR_TILD RA(FR_N)         // ~ (dead)


/* Shift AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │ [ │   │   │   │   │   │ ] │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │ ï │   │   │   │   │  #  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │ | │   │   │        │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │    │   │   │   │   │   │   │   │   │   │ \ │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_LBRC RS(RA(FR_LPRN))      // [
#define FR_RBRC RS(RA(FR_RPRN))      // ]

#define FR_ITREM RS(RA(FR_I))        // ï
#define FR_HASH RS(RA(FR_GRV))       // #

#define FR_PIPE RS(RA(FR_L))         // |
#define FR_BSLS RS(RA(FR_COLN))      // (backslash)

