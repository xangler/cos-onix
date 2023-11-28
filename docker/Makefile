include base-info
export ImageName=${DemoName}-image.${Version}

image-arch:
	cd ${Version} && ./prepare.sh && docker build --network=host -t ${DemoName}:${Version} -f Dockerfile.arch . && cd -

image-ubuntu:
	cd ${Version} && ./prepare.sh && docker build --network=host -t ${DemoName}:${Version} -f Dockerfile.ubuntu . && cd -

run:
	docker run -it --rm --entrypoint='bash' \
	--network=host \
	-v ${PWD}:/src/app \
	-w /src/app \
	${DemoName}:${Version}

load:
	docker load -i image/${ImageName}.tar

save:
	docker save ${DemoName}:${Version} -o image/${ImageName}.tar

publish:
	mkdir -p image
	cd image && xz -zk ${ImageName}.tar &&cd -

clean:
	docker images|grep -E '^<none>|${DemoName}'|grep -E '^<none>|${Version}'| awk '{print $$3}'|xargs -t -I{} docker rmi {} --force

.PHONY: image run load save publish clean