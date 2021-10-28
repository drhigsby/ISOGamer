#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// There are a number of variations depending on the layout of your bottom row.
// The arrow variant adds an additional key on the bottom-right, while the
// command variant adds an additional key on the bottom-left. arrow-command is a
// combination of both of those, having an additional key on both sides.
//
// Please note that the numbering of the macro arguments are based on the
// numbers of the keys on the PCB.

#define LAYOUT_default( \
  k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, \
  k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112,  \
        k202, k203, k204, k205, k206, k207, k208, k209, k210, k211,         \
  k301, k302, k303,       k305,                         k310, k311, k312     \
) \
{ \
  { k001,  k002, k003, k004,  k005, k006,  k007,  k008,  k009,  k010, k011, k012 }, \
  { k101,  k102, k103, k104,  k105, k106,  k107,  k108,  k109,  k110, k111, k112 },  \
  { KC_NO, k202, k203, k204,  k205, k206,  k207,  k208,  k209,  k210, k211, KC_NO },  \
  { k301,  k302, k303, KC_NO, k305, KC_NO, KC_NO, KC_NO, KC_NO, k310, k311, k312 }     \
}

#define LAYOUT_2x3( \
  k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, \
  k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112,  \
        k202, k203, k204, k205, k206, k207, k208, k209, k210, k211,         \
  k301, k302, k303,       k305,             K308,       k310, k311, k312     \
) \
{ \
  { k001,  k002, k003, k004,  k005, k006,  k007,  k008, k009,  k010, k011, k012 }, \
  { k101,  k102, k103, k104,  k105, k106,  k107,  k108, k109,  k110, k111, k112 },  \
  { KC_NO, k202, k203, k204,  k205, k206,  k207,  k208, k209,  k210, k211, KC_NO },  \
  { k301,  k302, k303, KC_NO, k305, KC_NO, KC_NO, k308, KC_NO, k310, k311, k312 }     \
}

#define LAYOUT_noniso( \
  k001, k002, k003, k004, k005, k006, k007, k008, k009, k010, k011, k012, \
  k101, k102, k103, k104, k105, k106, k107, k108, k109, k110, k111, k112,  \
  k201, k202, k203, k204, k205, k206, k207, k208, k209, k210, k211, k212,    \
  k301, k302, k303,       k305,             K308,       k310, k311, k312     \
) \
{ \
  { k001, k002, k003, k004,  k005, k006,  k007,  k008, k009,  k010, k011, k012 }, \
  { k101, k102, k103, k104,  k105, k106,  k107,  k108, k109,  k110, k111, k112 },  \
  { k201, k202, k203, k204,  k205, k206,  k207,  k208, k209,  k210, k211, k212 },   \
  { k301, k302, k303, KC_NO, k305, KC_NO, KC_NO, k308, KC_NO, k310, k311, k312 }     \
}
