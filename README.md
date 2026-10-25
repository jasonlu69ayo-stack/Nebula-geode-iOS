# NEBULA v0.4.1 — iOS build starter

This is a **source project**, not a prebuilt or tested `.geode` mod. It contains a minimal menu popup hook and a GitHub Actions workflow intended to cross-compile an iOS package using the community `prevter/geode-sdk:ios-latest` toolchain container.

## Target

- Geometry Dash: 2.2081
- Geode SDK metadata: v5.11.2 (check that this matches your installed Geode version)
- Platform target: iOS / arm64 through the iOS toolchain container

## Build from an iPad without a Mac

1. Sign in to GitHub in Safari and create a **new private repository** named `nebula-geode-ios`.
2. Upload the contents of this folder to the repository, including the hidden `.github/workflows/build-ios.yml` file. If GitHub's upload page hides dot-folders, use **Add file → Create new file** and create `.github/workflows/build-ios.yml` by pasting the workflow contents.
3. Open the repository's **Actions** tab. Enable Actions if GitHub asks.
4. Run **Build NEBULA for iOS** with **Run workflow**, or push a commit to `main`.
5. Open the completed workflow run and download the `nebula-ios-geode` artifact. It should contain a `.geode` package if the build succeeds.

## Install

Use the install/import option exposed by your Geode iOS launcher. If your setup is in JIT-less/Enterprise mode, Geode's official guide warns that changing mods may require rebuilding/reinstalling its patched Helper IPA. Back up Geometry Dash save data first and do not delete your existing game or Helper app.

## Important limits

- This workflow has **not been run or verified from this chat**. If it fails, share the first error shown in the GitHub Actions log and I can help fix it.
- The popup is only a foundation test. Speedhack, noclip, FPS bypass, custom wave trail, and bot replay are **not implemented**.
- This workflow uses a community toolchain container, not an official Geode-hosted build service. Review its source before relying on it.
- Don't upload Apple signing certificates, passwords, or private keys to the repository or workflow.
