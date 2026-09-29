# AGENTS.md

Read the shared rules first: agents/AGENTS.md of https://github.com/DE-Knowledge-Base/agents.md (on Alamin's MacBooks at ~/agents.md), plus the applicable harness supplement. This file adds this repository's guidance.

## Purpose, current state and planned work

A small C++ TCP-server demonstration using POCO to accept a string and return its reversal.

Maintenance and runtime/deployment status are not established by this top-level audit, so `repo.yaml` uses `state: unknown`. Capabilities below describe documentation and tracked material, not newly tested application behavior.

Current documented capabilities:

- tcp_server.cpp and sample-output material are tracked; README documents the reversal protocol on port 28888.
- README explicitly describes single-client handling and omitted corner cases; this is a sample rather than a validated production service.

No repository roadmap is established by the reviewed top-level documentation; `planned_capabilities` is empty.

## Working here

- Read the README sample limitations before changing protocol or concurrency behavior.
- Verify build instructions against the affected source when changing them; this metadata audit did not compile or start the server.
