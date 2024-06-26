#include <filesystem>

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QString>

int main(int argc, char *argv[]) {
	QGuiApplication app(argc, argv);
	app.setOrganizationName("N/A");
	app.setOrganizationDomain("N/A");
	app.setApplicationName("Qt6 Hello World");

	QQmlApplicationEngine engine(
		QString(
			(
				std::filesystem::path(__FILE__).parent_path().parent_path() 
					/ "qml" / "main.qml"
			).generic_string().c_str()
		)
	);

	if (engine.rootObjects().empty())
    	return 1;

	return app.exec();
}