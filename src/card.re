let base_classes = [
  "p-6",
  "rounded-xl",
  "bg-white",
  "dark:bg-surface0",
  "shadow-xl",
  "border",
  "border-slate-200/60",
  "dark:border-slate-700/20",
];

[@react.component]
let make = (~className="", ~children) => {
  let classes = base_classes |> String.concat(" ");
  <div className={classes ++ " " ++ className}> children </div>;
};
