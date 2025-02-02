# Taraxa CLI Tools

## Install

```bash
pip install -r requirements.txt
```

## Taraxa Local Net

You can use the `local-net` script to start multiple nodes locally using a prebuit binary.


```
Usage: local-net start [OPTIONS] BINARY

  Start a local testnet

Options:
  --boot-nodes INTEGER  Number of boot nodes
  --rpc-nodes INTEGER   Number of RPC nodes
  --template TEXT       Name of config template to use as base
  --tps INTEGER         Number of transactions per second (if zero the faucet
                        will not start)

  --help                Show this message and exit.
```

The `template` flag is optional. It will, by default, use the devnent config as a starting point.

If you need specific log channels turned on for debugging we suggest you add them in the `./config/_template.json` file and then run the `local-net` command.

The script can be run from anywhere but keep in mind that it will create a new directory called `local-net-data` that contains the data and config files for the nodes in the current path.

For example if you want to test the new binary on a network with 3 boot nodes and 1 RPC node you can run the following command in the root of the current repo:

```bash
./cli/local-net start --boot-nodes 3 --rpc-nodes 1 --tps 1 ./cmake-build/bin/taraxad
```

## Taraxa CLI

```
Usage: taraxa [OPTIONS] COMMAND [ARGS]...

  Taraxa CLI

Options:
  --help  Show this message and exit.

Commands:
  account  Generate or view a Taraxa Account key.
  config   Manage node config
  vrf
```