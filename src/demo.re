// Both forms below cause the failure:

/* let firstArg = Sys.argv[1]; */

let firstArg = Array.get(Sys.argv, 1);
