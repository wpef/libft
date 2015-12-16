; Affiches les espaces en trop en rouge
(setq whitespace-style '(face trailing))
(setq-default show-trailing-whitespace t)
; Coloration syntaxique
(setq font-lock-global-modes t)
; Affiche le numero de colonne
(column-number-mode t)
; Affiche une regle avec le numero de ligne
(global-linum-mode 1)
; indentation auto
(setq c-default-style "linux")
(setq c-basic-offset 8)
; pair les chars
(electric-pair-mode t)

;Deplacement auto des fichiers dans le dossier ~/.emacs.d/backup
(setq backup-directory-alist '(("." . "~/.emacs.d/backup"))
	  backup-by-copying t
	  version-control t
	  delete-old-versions t
	  kept-new-versions 5
	  kept-old-versions 5
	  )

