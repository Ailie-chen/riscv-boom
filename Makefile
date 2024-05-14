SHELL := /bin/bash
# 定义gdocker目标，该目标将执行容器命令
gdocker:
	podman run -it --privileged -v ./generators:/root/chipyard/generators -v ./sims/verilator:/root/chipyard/sims/verilator -v ./sim-tests/:/root/chipyard/tests/ localhost/boom-emulator-cw:1.0 bash -c "cd /root/chipyard && exec /bin/bash"
.PHONY: gdocker