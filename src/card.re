[@react.component]
let make = (~className="", ~children) => {
  <div
    className={Tailwind.merge([|
      "p-6 rounded-3xl shadow border-2 border-pink",
      className,
    |])}>
    children
  </div>;
};
