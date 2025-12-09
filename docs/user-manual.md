# morskey User Manual
This document is a specification of the `morskey` application and describes it's
use and functionality.

Last updated: December 8th, 2025

## First Time Usage
Upon starting the morskey application, it will capture your keyboard, and use
it's default settings. This is:

`Space`: Straight-keyer (in keyer mode)<br>
`CTRL`+`[`: Exit/enter keyer mode<br>
`CTRL`+`]`: Open the Control Panel<br>
Unit: 60ms<br>
Chart: `international.mcc`<br>
Sound: On<br>
Frequency: 800hz<br>
Volume: 50%

These settings can be changed from the Control Panel. These settings are stored
in a file, and if the file does not exist, it will be created. The file will be
created next to the executable.

## Keyer Mode
In keyer mode, the key set for the Straight-keyer will be read as such,
converting your timed inputs into morse code, which is then converted into
outputs as defined by the Chart. These outputs will then be sent to whatever
application you are focused on, just as if you were using your peripherial as
intended. Upon pressing the key set for Exit/enter keyer mode, the application
will switch to normal mode.

## Normal Mode
In normal mode, the captured keyboard will no longer be converted and will send
inputs as normally expected. Upon pressing the key set for Exit/enter keyer
mode, the application will switch back to keyer mode.

## Customization & The Control Panel
In the control panel, you can customize the keys set for the Straight-keyer,
Exit/enter keyer mode, and Open the Control Panel binds.

You can also turn off/on Sound and you can adjust the frequency at which this
sound plays, between 300hz and 1000hz. The volume can be adjusted, as well.

You can change the length of an individual unit. 

You can change the chart between two pre-existing charts:<br>
- `international.mcc`<br>
- `american.mcc`

You can also create your own chart.

## mcc format
The `.mcc` or "morse code chart" format is a custom format for the purposes of
the app. The format is fairly intuitive. To define an output (usually a
character) you can specify it in quotation marks (e.g. "A"), and add a colon.
Then, a space, and here you may use `.` to specify an on unit (i.e. key down)
and `/` to specify an off unit (key up). To define a unique output, it must be
on it's own new line.

Example (from `international.mcc`):<br>
`"A": ./...`

The only two outputs that must be defined are:<br>
`WORD_DONE`: Finished with a word.<br>
`LETTER_DONE`: Finished with a letter.

They are defined in `international.mcc` as so:<br>
`"WORD_DONE": ///////`<br>
`"LETTER_DONE": ///`

If there is an error in parsing the chart, the application will alert with a
message box and switch to the default International Morse Code chart.

All the possible outputs are:<br>
`A` `B` `C` `D` `E` `F` `G` `H` `I` `J` `K` `L` `M` `N` `O` `P` `Q` `R` `S` `T`
`U` `V` `W` `X` `Y` `Z`<br>
`a` `b` `c` `d` `e` `f` `g` `h` `i` `j` `k` `l` `m` `n` `o` `p` `q` `r` `s` `t`
`u` `v` `w` `x` `y` `z`<br>
`1` `2` `3` `4` `5` `6` `7` `8` `9` `10`<br>
`` ` `` `~` `!` `@` `#` `$` `%` `^` `&` `*` `(` `)` `-` `_` `=` `+` `{` `}` `[`
`]` `\` `|` `;` `:` `"` `'` `,` `.` `/` `<` `>` `?`<br>
`F1` `F2` `F3` `F4` `F5` `F6` `F7` `F8` `F9` `F10` `F12`<br>
`SPACE_KEY` `SHIFT_KEY` `CTRL_KEY` `TAB_KEY` `ENTER_KEY` `ALT_KEY`<br>
`WORD_DONE` `LETTER_DONE`
