FROM dkosmari/devkitppc-wiiu-debian

USER user

WORKDIR /project
COPY --chown=user:user . /project
