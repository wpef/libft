"c-autoindent
set autoindent
set smartindent
set	cindent

"Highlight les espaces en trop et les espaces en fin de ligne
:highlight ExtraWhitespace ctermbg=darkgreen guibg=lightgreen
:match ExtraWhitespace /\s\s\| \+\ze\n/

"mapping touches
imap ( ()<ESC>i
imap { {}<ESC>i

"Colonne highlightee
set ruler
set cursorcolumn
