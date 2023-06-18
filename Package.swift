// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTOML",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterTOML", targets: ["TreeSitterTOML"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterTOML",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "corpus",
                    "examples",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
