type elt =
  | H1
  | H2
  | H3
  | H4
  | H5
  | H6
  | P;

type size =
  | Small
  | Base
  | Large;

type font_style =
  | Sans
  | Serif
  | Mono;

type font_weight =
  | Thin
  | Extra_light
  | Light
  | Normal
  | Medium
  | Semi_bold
  | Bold
  | Extra_bold
  | Black;

let base_classes = ["text-slate-600", "dark:text-slate-400"];

let classes_of_font_style =
  fun
  | Sans => ["font-sans"]
  | Serif => ["font-serif"]
  | Mono => ["font-mono"];

let classes_of_font_weight =
  fun
  | Thin => ["font-thin"]
  | Extra_light => ["font-extralight"]
  | Light => ["font-light"]
  | Normal => ["font-normal"]
  | Medium => ["font-medium"]
  | Semi_bold => ["font-semibold"]
  | Bold => ["font-bold"]
  | Extra_bold => ["font-extrabold"]
  | Black => ["font-black"];

let classes_of_size =
  fun
  | Small => ["text-xs"]
  | Base => ["text-base"]
  | Large => ["text-2xl"];

let classes_of_props = (~font_style, ~font_weight, ~size) =>
  List.flatten([
    base_classes,
    classes_of_font_style(font_style),
    classes_of_size(size),
    classes_of_font_weight(font_weight),
  ])
  |> String.concat(" ");

let render_elt = (~elt, ~classes, ~children) =>
  switch (elt) {
  | H1 => <h1 className=classes> children </h1>
  | H2 => <h2 className=classes> children </h2>
  | H3 => <h3 className=classes> children </h3>
  | H4 => <h4 className=classes> children </h4>
  | H5 => <h5 className=classes> children </h5>
  | H6 => <h6 className=classes> children </h6>
  | P => <p className=classes> children </p>
  };

[@react.component]
let make =
    (~elt=P, ~size=Base, ~font_style=Sans, ~font_weight=Normal, ~children) => {
  render_elt(
    ~elt,
    ~classes=classes_of_props(~font_style, ~font_weight, ~size),
    ~children,
  );
};
