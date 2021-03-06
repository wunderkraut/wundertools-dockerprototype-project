#!/usr/bin/env bash

PROJECT="wkfi"
OFFICE="fi"

IMAGE_VERSION="master"
DB_VERSION="0.2"

SUBPATH_APP_SOURCE="source"
SUBPATH_APP_SETTINGS="source/settings"
SUBPATH_APP_ASSETS="assets"

CONTAINER_PATH_SOURCE="/app/web"
CONTAINER_PATH_VENDOR="/app/vendor"

BUILD_IMAGE_REPO="quay.io/wunder"
BUILD_IMAGE_ROOT="${BUILD_IMAGE_REPO}/client-${OFFICE}-${PROJECT}"
BUILD_VERSION="${VERSION}"
