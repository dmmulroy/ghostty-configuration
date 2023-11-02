(lang dune 3.11)

(using melange 0.1)

(using directory-targets 0.1)

(name ghostty_configurator)

(generate_opam_files true)

(source
 (github dmmulroy/ghostty-configurator))

(authors "Dillon Mulroy <dillon.mulroy@gmail.com>")

(maintainers "Dillon Mulroy <dillon.mulroy@gmail.com>")

(license MIT)

(documentation https://github.com/dmmulroy/ghostty-configurator)

(package
 (name ghostty_configurator)
 (synopsis
  "A webapp for creating, editing, and managing Ghostty configurations")
 (description
  "A webapp for creating, editing, and managing Ghostty configurations")
 (allow_empty)
 (depends
  (ocaml
   (>= 5.1.0))
  (dune
   (>= 3.11))
  (melange
   (>= 2.1.0))
  opam-check-npm-deps
  (reason
   (>= 3.10.0))
  (reason-react
   (>= 0.13.0))
  reason-react-ppx)
 (tags
  (ghostty, terminal-emulator, react, reasonml, ocaml, melange, zig, tui)))
