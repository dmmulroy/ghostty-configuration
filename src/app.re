// TODO: Fix tailwind config content to pickup source files correctly
module App = {
  [@react.component]
  let make = () => {
    <div className="dark h-full w-full">
      <div
        className="h-full w-full flex flex-col items-center dark:bg-slate-900 dark:text-slate-400 space-y-4">
        <Card className="w-2/3">
          <Typography elt=Typography.H1>
            {React.string("Hello, world!")}
          </Typography>
        </Card>
      </div>
    </div>;
  };
};

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root) => ReactDOM.render(<App />, root)
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );
