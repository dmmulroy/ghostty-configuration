module Title = {
  open Typography;

  [@react.component]
  let make = (~className="") => {
    <div
      className={
        "w-full flex flex-col justify-center items-center space-y-4"
        ++ " "
        ++ className
      }>
      <Typography elt=H1 size=XLarge className="text-text">
        {React.string("Ghostty Configurator")}
      </Typography>
      <Typography elt=H2 size=Large className="text-subtext0">
        {React.string(
           "Easily create, edit, and manage ghostty configuration files",
         )}
      </Typography>
    </div>;
  };
};

module CreateOrUploadCard = {
  open Typography;

  [@react.component]
  let make = () =>
    <Card
      className="w-1/3 flex flex-col justify-center items-center space-y-2">
      <>
        <Button> {React.string("Create new config")} </Button>
        <Button
          className="border border-slate-700" variant=Button.Secondary_outline>
          {React.string("Upload config")}
        </Button>
        <Typography size=Small className="text-subtext0">
          {React.string("or drag and drop your config")}
        </Typography>
      </>
    </Card>;
};

module App = {
  [@react.component]
  let make = () => {
    <div className="dark h-full w-full">
      <div
        className="h-full w-full flex flex-col items-center pt-4 bg-gradient-to-b dark:from-base dark:to-crust dark:bg-crust dark:text-slate-400 space-y-4">
        <Title className="mb-8" />
        <div className="w-full flex flex-col items-center">
          <CreateOrUploadCard />
        </div>
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
